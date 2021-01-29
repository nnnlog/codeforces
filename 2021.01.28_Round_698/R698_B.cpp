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
		int q, d;
		cin >> q >> d;
		vi dp(101);
		dp[0] = 1;
		for (int k = 0; k <= 9; k++) {
			int x = k * 10 + d;
			for (int i = x; i <= 100; i++) dp[i] = max(dp[i], dp[i - x]);
		}
		while (q--) {
			int a;
			cin >> a;
			if (a >= d * 10) {
				cout << "yes\n";
				continue;
			}
			cout << (dp[a] ? "yes" : "no") << "\n";
		}
	}
}
