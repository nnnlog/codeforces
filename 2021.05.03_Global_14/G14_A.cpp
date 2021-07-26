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
		int n, x; cin >> n >> x;
		vi vec(n);
		for (auto &i : vec) cin >> i;
		sort(all(vec), greater<>());
		int sum = 0, f = 1;
		vi ans;
		while (!vec.empty()) {
			int ok = 0;
			for (int i = 0; i < vec.size(); i++) {
				if (sum + vec[i] != x) {
					ans.push_back(vec[i]);
					sum += vec[i];
					vec.erase(vec.begin() + i);
					ok = 1;
					break;
				}
			}
			if (!ok) {
				f = 0;
				break;
			}
		}
		if (!f) cout << "NO\n";
		else {
			cout << "YES\n";
			for (const auto &i : ans) cout << i << " ";
			cout << "\n";
		}
	}
}
