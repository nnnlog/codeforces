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
		ll x, y, a, b; cin >> x >> y >> a >> b;
		if (a < b) swap(a, b);
		ll l = 0, r = min(x / b, y / b);
		if (a == b) {
			cout << r << "\n";
			continue;
		}
		auto solve = [&](ll t) {
			return min(t, ((x - b * t) / (a - b)) + ((y - b * t) / (a - b)));
		};
		while (l + 3 < r) {
			ll p = (l + l + r) / 3, q = (l + r + r) / 3;
			if (solve(p) >= solve(q)) r = q;
			else l = p;
		}
		ll ans = 0;
		for (ll i = l; i <= r; i++) ans = max(ans, solve(i));
		cout << ans << "\n";
	}
}
