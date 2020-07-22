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
		int sorted = true, flag = false;

		vector<int> chk;
		for (int i = 1; i <= n; i++) {
			int a;
			cin >> a;
			if (a != i) {
				sorted = false;
				chk.push_back(i);
			} else flag = true;
		}

		bool cons = chk.size() != n;
		int prev = chk.empty() ? 0 : chk.front() - 1;
		for (const int &a : chk) {
			if (prev + 1 != a) {
				cons = false;
				break;
			}
			prev = a;
		}

		if (sorted) cout << 0;
		else cout << 1 + flag - cons;
		cout << "\n";
	}
}
