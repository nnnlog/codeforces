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
		vi vec(3);
		int n, g;
		cin >> n;
		g = n / 3;
		while (n--) {
			int a;
			cin >> a;
			vec[a % 3]++;
		}
		auto nxt = [](int a) {
			return a >= 2 ? 0 : a + 1;
		};
		int ans = 0;
		while (1) {
			int upd = 0;
			for (int j = 0; j < 3; j++) {
				if (vec[j] > g) {
					int f = vec[j] - g;
					vec[nxt(j)] += f;
					vec[j] = g;
					upd = 1;
					ans += f;
				}
			}
			if (!upd) break;
		}
		cout << ans << "\n";
	}
}
