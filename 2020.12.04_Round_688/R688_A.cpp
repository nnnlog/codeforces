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
		int n, m, ans = 0; cin >> n >> m;
		unordered_map<int, int> mp;
		while (n--) {
			int a; cin >> a;
			mp[a]++;
		}
		while (m--) {
			int a; cin >> a;
			mp[a]++;
			if (mp[a] == 2) ++ans;
		}
		cout << ans << "\n";
	}
}
