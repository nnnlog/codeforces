#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;

ll my_pow(ll b, ll p) {
	ll ret = 1;
	for (int i = 0; i < p; i++)ret *= b;
	return ret;
}

ll get_dv(ll n, ll d) {
	ll i = 1;
	for (; n % my_pow(d, i) == 0; ++i) {}
	return i - 1;
}

vector<int> prime;
int vis[1000001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	for (int i = 2; i <= 1000000; i++) {
		if (vis[i]) continue;
		prime.push_back(i);
		for (int j = i; j <= 1000000; j += i) vis[j] = 1;
	}

	int T;
	cin >> T;
	while (T--) {
		ll n;
		cin >> n;
		vector<pair<ll, ll>> vec;

		ull mx = 1, mx_val = n;
		for (const auto &p : prime)
			if (n % p == 0) {
				ll cnt = get_dv(n, p);
				//cout << "P: " << p << ", " << cnt << "\n";

				if (mx < cnt) {
					mx = cnt;
					mx_val = p;
				}

				vec.emplace_back(p, cnt);
			}

		cout << mx << "\n";

		if (mx == 1) cout << n;
		else {
			for (int i = 0; i < mx - 1; i++) cout << mx_val << " ";

			ll ans = mx_val;
			for (const auto &i : vec) {
				if (i.first == mx_val) continue;
				ans *= my_pow(i.first, i.second);
			}
			cout << ans;
		}

		cout << "\n";
	}
}
