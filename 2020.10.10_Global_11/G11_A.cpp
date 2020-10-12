#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T;
	cin >> T;
	while (T--) {
		int n, sum_a = 0, sum_b = 0, zero = 0; cin >> n;
		multiset<int> pos, neg;
		for (int i = 0; i < n; i++) {
			int a; cin >> a;
			if (a > 0) pos.insert(a), sum_a += a;
			else if (a < 0) neg.insert(-a), sum_b += -a;
			else zero++;
		}

		if (sum_a != sum_b) {
			cout << "YES\n";
			if (sum_a > sum_b) {
				for (const auto &i : pos) cout << i << " ";
				for (const auto &i : neg) cout << -i << " ";
			} else {
				for (const auto &i : neg) cout << -i << " ";
				for (const auto &i : pos) cout << i << " ";
			}
			while (zero--) cout << "0 ";
		} else cout << "NO";
		cout << "\n";
	}
}
