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

	int T = 1;
	cin >> T;
	while (T--) {
		int n, m;
		cin >> n >> m;
		vi v1(n), v2(n);
		for (auto &i : v1) cin >> i;
		for (auto &i : v2) cin >> i;

		multiset<pii> s;
		vi painter(m), ans(m);
		int k = 0;
		for (auto &i : painter) cin >> i, s.insert({i, -(k++)});

		int f = 0, lastPaint = -1;
		for (int i = 0; i < n; i++) {
			if (v1[i] != v2[i]) {
				auto it = s.lower_bound({v2[i], -1e9});
				if (it == s.end() || it->first != v2[i]) {
					f = 1;
					break;
				}
				//cout << "paint1 " << i << " " << -it->second << "\n";
				lastPaint = max(lastPaint, -it->second);
				ans[-it->second] = i;
				s.erase(it);
			}
		}

		if (!f)
			for (int i = 0; i < n; i++) {
				if (v1[i] == v2[i]) {
					auto it = s.lower_bound({v2[i], -1e9});
					if (it == s.end() || it->first != v2[i]) continue;
					//cout << "paint2 " << i << " " << -it->second << "\n";
					lastPaint = max(lastPaint, -it->second);
					ans[-it->second] = i;
					s.erase(it);
				}
			}

		if (lastPaint != m - 1) f = 1;

		if (!f)
			for (const auto &[c, p_id] : s) {
				ans[-p_id] = ans[lastPaint];
			}

		if (f) {
			cout << "NO\n";
		} else {
			cout << "YES\n";
			for (const auto &i : ans) cout << i + 1 << " ";
			cout << "\n";
		}
	}
}
