#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		vector<set<int>> vec(n);
		for (int k = 0; k < 3; k++)
			for (int i = 0; i < n; i++) {
				int a;
				cin >> a;
				vec[i].insert(a);
			}

		int prev = -2, first = 0;
		for (int i = 0; i < n - 1; i++) {
			for (const auto &j : vec[i]) {
				if (j != prev) {
					if (!i) first = j;

					cout << j << " ";
					prev = j;
					break;
				}
			}
		}

		int ans = 0;
		for (const auto &j : vec.back())
			if (prev != j && first != j) ans = j;

		cout << ans << "\n";
	}
}
