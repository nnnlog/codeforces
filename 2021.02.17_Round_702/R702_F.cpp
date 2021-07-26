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
		int n; cin >> n;
		map<ll, ll> mp;
		for (int i = 0; i < n; i++) {
			int a; cin >> a;
			mp[a]++;
		}
		vl cnt;
		for (const auto &[i, c] : mp) cnt.emplace_back(c);
		vi sum(cnt.size());
		sum[0] = cnt[0];
		for (int i = 1; i < cnt.size(); i++) sum[i] = sum[i - 1] + cnt[i];
		sort(all(cnt));

		auto get = [&](int l, int r) {
			return sum[r] - (l ? sum[l - 1] : 0);
		};

		vl tmp = cnt;
		tmp.erase(unique(all(tmp)), tmp.end());

		ll ans = 1e18;
		for (const auto &i : tmp) {
			auto st = lower_bound(all(cnt), i);
			ll ok = 0;
			if (st > cnt.begin()) ok += get(0, --st - cnt.begin()), ++st;
			ok += get(st - cnt.begin(), (int)cnt.size() - 1);
			ok -= i * ((int)cnt.size() - (st - cnt.begin()));

			ans = min(ans, ok);
		}
		cout << ans << "\n";
	}
}
