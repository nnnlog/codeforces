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
		int n, k; cin >> n >> k;
		vi vec(n);
		for (auto &i : vec) cin >> i;
		int f = 0, last = -1;
		while (k--) {
			int y = 0;
			for (int i = 1; i < n; i++) {
				if (vec[i - 1] < vec[i]) {
					++vec[i - 1];
					last = i;
					y = 1;
					break;
				}
			}

			if (!y) {
				f = 1;
				break;
			}
		}
		cout << (f ? -1 : last) << "\n";
	}
}
