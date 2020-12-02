#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;

set<pll> ans;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	ll sum = 0;
	for (ll i = 1; sum <= 1e7; i++) {
		sum += i;
		ans.insert({sum, i});
	}

	int T = 1;
	cin >> T;
	while (T--) {
		ll n; cin >> n;
		auto it = ans.lower_bound({n, 0});
		if (it->first == n) cout << it->second << "\n";
		else cout << it->second + (it->first - 1 == n ? 1 : 0) << "\n";
	}
}
