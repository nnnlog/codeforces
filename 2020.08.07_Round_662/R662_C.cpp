#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);
 
	int T; cin >> T;
	while (T--) {
		int n, mx = 0; cin >> n;
		vector<pair<int, int>> v(100001);
		for (int i = 0; i < n; i++) {
			int a; cin >> a;
			v[a] = {v[a].first + 1, a};
			mx = max(mx, v[a].first);
		}
 
		sort(v.begin(), v.end(), greater<>());
 
		int ans = 0;
		for (const auto &i : v)
			if (i.first == mx) {
				ans++;
				n -= i.first;
			}
 
		ans += n / (mx - 1) - 1;
		cout << ans << "\n";
	}
}
