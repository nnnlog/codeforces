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

void yes() {
	cout << "YES\n";
}

void no() {
	cout << "NO\n";
}

void yes(bool y) {
	if (y) yes();
	else no();
}

int vis[100001];
vi prime;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	for (int i = 2; i <= 100000; i++) {
		if (vis[i]) continue;
		vis[i] = 1;
		prime.push_back(i);
		for (int j = i; j <= 100000; j += i) vis[j] = 1;
	}

	auto cnt = [&](int a) {
		int ret = 0;
		for (int p : prime) {
			while (a % p == 0) a /= p, ++ret;
			if (a == 1 || a < p) break;
		}
		if (a > 1) ++ret;
		return ret;
	};

	int T = 1;
	cin >> T;
	while (T--) {
		int a, b, k;
		cin >> a >> b >> k;
		if (a > b) swap(a, b);
		int g = gcd(a, b);
		if (g > 1) {
			int x = cnt(a / g) + cnt(b / g);
			if (((a == g) ^ (b == g)) && k == 1) {
				yes();
				continue;
			}
			if (k < 2) {
				no();
				continue;
			}
			if (k <= x) {
				yes();
				continue;
			}
			k -= x;
			int nxt = 2 * cnt(g);
			k -= nxt;
			yes(k <= 0);
		} else {
			int x = cnt(a) + cnt(b);
			if (((a == 1) ^ (b == 1)) && k == 1) {
				yes();
				continue;
			}
			yes(2 <= k && k <= x);
		}

	}
}
