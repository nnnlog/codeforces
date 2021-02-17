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

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T = 1;
	cin >> T;
	while (T--) {
		int n; cin >> n;
		ld prv; cin >> prv;
		int ans = 0;
		for (int i = 0; i < n - 1; i++) {
			ld a; cin >> a;
			if (a < prv) {
				ll diff = ceil(prv / a);
				if (diff > 2) ans += ceil(log2(diff)) - 1;
			} else {
				ll diff = ceil(a / prv);
				if (diff > 2) ans += ceil(log2(diff)) - 1;
			}
			prv = a;
		}
		cout << ans << "\n";
	}
}
