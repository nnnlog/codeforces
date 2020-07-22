#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	int T;
	cin >> T;
	while (T--) {
		int chk[1001] = {0,};

		int n, m, flag = 0, a;
		cin >> n >> m;

		for (int i = 0; i < n; i++) {
			cin >> a;
			if (chk[a]) continue;
			chk[a] = 1;
		}

		for (int i = 0; i < m; i++) {
			cin >> a;
			if (!flag && chk[a]) {
				flag = 1;
				cout << "YES\n1 " << a << "\n";
			}
		}

		if (!flag) cout << "NO\n";
	}
}
