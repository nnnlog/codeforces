#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	int T; cin >> T;
	while (T--) {
		int n, m, flag = 0; cin >> n >> m;

		for (int i = 0; i < n; i++) {
			int a, b, c, d; cin >> a >> b >> c >> d;
			//cout << "PR: " << a << b << c << d << "\n";
			if (/*a == d && */b == c) flag = 1;
		}

		if (m % 2) {
			cout << "NO\n";
			continue;
		}

		/*int c = 1;
		for (int i = 2; i <= m; i *= 2, c++) {
			if (i == m && c % 2 == 0) flag = 1;
		}*/

		cout << (flag ? "YES\n" : "NO\n");
	}
}
