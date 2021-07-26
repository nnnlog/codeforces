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
		int zero_cnt = 0, one_cnt = 0, zero_i = n - 1;

		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			if (!a) zero_cnt++;
			else one_cnt++;

			zero_i = min(zero_i, i);
		}

		n /= 2;
		if (zero_cnt < one_cnt && n % 2) n++;
		//zero_i = min(n - 1, zero_i);
		cout << n << "\n";
		for (int i = 0; i < n; i++) {
			if (zero_cnt >= one_cnt) cout << "0 ";
			else {
				//if (i == zero_i && n % 2) cout << "0 ";
				cout << "1 ";
			}
		}
		cout << "\n";
	}
}
