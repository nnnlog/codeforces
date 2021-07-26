#include <bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	int T; cin >> T;
	while (T--) {
		int n, top = -1, least = -1, prev = -1, ans = 1e9, dec_flag = false, dec_ans = 1e9; cin >> n;
		vector<int> l(n);
		for (int i = 0; i < n; i++) cin >> l[i];

		for (int i = n - 1; i >= 0; i--) {
			int a = l[i];
			if (prev != -1) {
				if (top == -1 && a < prev) {
					top = 0;
				}
				if (least == -1 && !top && a > prev) {
					ans = i + 1;
					least = 0;
				}
				if (!dec_flag && prev < a) {
					dec_flag = true;
					dec_ans = i + 1;
				}
			}
			prev = a;
		}

		if (!dec_flag) dec_ans = 0;
		if (least == -1) ans = 0;

		cout << min(min(ans, n), dec_ans) << "\n";
	}
}