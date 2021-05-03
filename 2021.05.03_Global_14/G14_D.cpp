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
		int n, l, r, sub = 0; cin >> n >> l >> r;
		mpii L, R;
		for (int i = 0; i < l; i++) {
			int a; cin >> a;
			L[a]++;
		}
		for (int i = 0; i < r; i++) {
			int a; cin >> a;
			R[a]++;
			if (L[a]) --L[a], --R[a], ++sub;
		}
		l -= sub, r -= sub;
		if (l < r) swap(l, r), swap(L, R);
		int ans = 0;
		if (l != r) {
			mpii tmp;
			for (const auto &[a, b] : L) {
				int diff = max(0, b - R[a]);
				int give = 0;
				if (diff / 2) {
					if (l - diff / 2 < r + diff / 2) give = (l - r) / 2;
					else give = diff / 2;
				}
				l -= give * 2;
				ans += give;
			}
		}
		cout << ans + (l - r) / 2 + (l + r) / 2 << "\n";
	}
}
