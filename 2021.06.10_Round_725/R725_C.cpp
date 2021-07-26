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

void yes() {
	cout << "YES\n";
}
void no() {
	cout << "NO\n";
}
void yes(bool y) {
	if (y) yes();
	else no();
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T = 1;
	cin >> T;
	while (T--) {
		ll n, l, r; cin >> n >> l >> r;
		vl vec(n);
		for (auto &i : vec) cin >> i;
		sort(all(vec));
		ll ans = 0;
		for (int i = 0; i < n; i++) {
			auto L = lower_bound(vec.begin() + i + 1, vec.end(), l - vec[i]);
			auto R = --upper_bound(vec.begin() + i + 1, vec.end(), r - vec[i]);
			//cout << L - vec.begin() << " " << R - vec.begin() << "\n";
			if (L <= R) ans += R - L + 1;
		}
		cout << ans << "\n";
	}
}
