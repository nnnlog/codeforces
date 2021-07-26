#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	int T;
	cin >> T;
	while (T--) {
		long long n, zero = 0, ans = 1;
		cin >> n;
		vector<long long> neg, pos;
		for (int i = 0; i < n; i++) {
			long long a;
			cin >> a;
			if (!a) zero = 1;
			else if (a < 0) neg.emplace_back(a);
			else pos.emplace_back(a);

			if (i < 5) ans *= a;
		}

		if (zero) ans = max(ans, 0LL);

		sort(neg.begin(), neg.end());
		sort(pos.begin(), pos.end(), greater<>());

		if (neg.size() >= 2) {
			long long tmp = 1;
			if (pos.size() >= 3) {
				for (int i = 0; i < 2; i++) tmp *= neg[i];
				for (int i = 0; i < 3; i++) tmp *= pos[i];
				ans = max(ans, tmp);
			}
		}
		if (neg.size() >= 4) {
			long long tmp = 1;
			if (pos.size() >= 1) {
				for (int i = 0; i < 4; i++) tmp *= neg[i];
				for (int i = 0; i < 1; i++) tmp *= pos[i];
				ans = max(ans, tmp);
			}
		}

		if (pos.size() >= 5) {
			long long tmp = 1;
			for (int i = 0; i < 5; i++) tmp *= pos[i];
			ans = max(ans, tmp);
		}

		if (neg.size() >= 5) {
			long long tmp = 1;
			for (int i = 1; i <= 5; i++) tmp *= neg[neg.size() - i];
			ans = max(ans, tmp);
		}

		cout << ans << "\n";
	}
}
