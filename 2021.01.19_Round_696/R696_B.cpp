#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef unordered_map<int, int> mpii;

int vis[100001];
vi prime;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	for (int i = 2; i <= 100000; i++) {
		if (vis[i]) continue;
		prime.push_back(i);
		for (int j = i; j <= 100000; j += i) {
			vis[j] = 1;
		}
	}

	int T = 1;
	cin >> T;
	while (T--) {
		ll d;
		cin >> d;
		if (d == 1) cout << "6\n";
		else if (d == 2) cout << "15\n";
		else {
			ll a = *lower_bound(all(prime), 1 + d);
			ll b = *lower_bound(all(prime), a + d);
			cout << a * b << "\n";
		}
	}
}
