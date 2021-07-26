#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T = 1;
	cin >> T;
	while (T--) {
		int n, k;
		cin >> n >> k;
		int prev = -1;
		vi vec(n + 1);
		int cnt = 0;
		vector<pii> sum;
		unordered_map<int, int> mp;

		for (int i = 1; i <= n; i++) {
			cin >> vec[i];
		}
		--k;

		int r = 1e9;
		for (int here = 1; here <= 100; here++) {
			int last = -1e9, ans = 0;
			for (int i = 1; i <= n; i++) {
				if (here != vec[i]) {
					if (i - k > last) {
						last = i;
						ans++;
					}
				}
			}
			r = min(r, ans);
		}

		cout << r << "\n";

		/*sort(sum.begin(), sum.end(), greater<>());

		for (const auto &i : sum) cout << i.first << " " << i.second << "/";
		cout << "\n";*/
	}
}
