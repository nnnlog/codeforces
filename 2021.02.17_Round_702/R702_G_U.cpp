#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pld;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ld> vld;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<pld> vpld;
typedef unordered_map<int, int> mpii;

std::ostream &
operator<<(std::ostream &dest, __int128_t value) {
	std::ostream::sentry s(dest);
	if (s) {
		__uint128_t tmp = value < 0 ? -value : value;
		char buffer[128];
		char *d = std::end(buffer);
		do {
			--d;
			*d = "0123456789"[tmp % 10];
			tmp /= 10;
		} while (tmp != 0);
		if (value < 0) {
			--d;
			*d = '-';
		}
		int len = std::end(buffer) - d;
		if (dest.rdbuf()->sputn(d, len) != len) {
			dest.setstate(std::ios_base::badbit);
		}
	}
	return dest;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T = 1;
	cin >> T;
	while (T--) {
		int a, b;
		cin >> a >> b;
		__int128 n = a, m = b;
		vector<pair<__int128, __int128>> sum;
		__int128 prv = 0;
		vector<__int128> vec(n);
		for (int j = 0; j < n; j++) {
			auto &i = vec[j];
			ll t;
			cin >> t;
			i = t;
			prv += i;
			if (prv > 0 && (sum.empty() || sum.back().first < prv)) sum.emplace_back(prv, j);
		}

		while (m--) {
			ll xx;
			cin >> xx;
			__int128 x = xx;
			auto it = lower_bound(all(sum), pair<__int128, __int128>(x, 0));
			if (it == sum.end() && prv <= 0) {
				cout << "-1 ";
				continue;
			}
			if (it < sum.end()) {
				cout << it->second << " ";
				continue;
			}
			__int128 l = 0, r = 1e9;
			while (l < r) {
				__int128 mid = (l + r) >> 1;
				__int128 t = x - mid * prv;
				if (t < 0) {
					r = mid - 1;
					continue;
				}
				auto it = lower_bound(all(sum), pair<__int128, __int128>(t, 0));
				if (it == sum.end()) l = mid + 1;
				else r = mid;
			}

			x -= ((l + r) >> 1) * prv;
			it = lower_bound(all(sum), pair<__int128, __int128>(x, 0));
			cout << (((l + r) >> 1) * n + it->second) << " ";
		}
		cout << "\n";
	}
}