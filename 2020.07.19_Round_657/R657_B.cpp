#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	int T;
	cin >> T;
	while (T--) {
		long long l, r, m;
		cin >> l >> r >> m;

		long long diff = r - l;
		for (long long a = l; a <= r; a++) {
			long long n = m / a;
			if (m % a > a / 2) ++n;
			if (n < 1) n = 1;

			long long remain = m - n * a;
			if (remain > 0 && remain <= diff) {
				long long b = r;
				long long c = b - remain;
				//cout << n << " :" ;
				cout << a << " " << b << " " << c << "\n";
				break;
			} else if (remain < 0 && -remain <= diff) {
				long long b = l;
				long long c = b - remain;

				//cout << n << " " << remain << " :" ;
				cout << a << " " << b << " " << c << "\n";
				break;
			} else if (!remain) {
				cout << a << " " << l << " " << l << "\n";
				break;
			}
		}
	}
}