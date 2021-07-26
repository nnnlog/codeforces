#include <bits/stdc++.h>

using namespace std;

int sz(int n) {
	int r = 0;
	n <<= 1;
	while (n >>= 1) r++;
	return r;
}

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	int T; cin >> T;
	while (T--) {
		unordered_map<int, long long> mp;
		int n; cin >> n;
		while (n--) {
			int a; cin >> a;
			mp[sz(a)]++;
			//cout << a << " " << sz(a) << "\n";
		}

		long long ans = 0;
		for (const auto &i : mp) ans += (i.second - 1) * i.second / 2;
		cout << ans << "\n";
	}
}
