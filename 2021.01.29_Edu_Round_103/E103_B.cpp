#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef unordered_map<int, int> mpii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cout << fixed;
	cout.precision(16);

	int T = 1;
	cin >> T;
	while (T--) {
		ld n, k; cin >> n >> k;
		vector<ld> vec(n);
		for (auto &i : vec) cin >> i;
		ll l = 0, r = 1e16;
		while (l < r) {
			ll mid = (l + r) >> 1;
			auto tmp = vec;
			tmp[0] += mid;
			ld sum = 0;
			int chk = 0;
			for (const auto &i : tmp) {
				if (sum) {
					//cout << i << " " << sum << " " << i / sum << "\n";
					if (i / sum > k / 100) {
						chk = 1;
						break;
					}
				}
				sum += i;
			}

			if (!chk) r = mid;
			else l = mid + 1;
		}

		cout << (l + r >> 1) << "\n";
	}
}
