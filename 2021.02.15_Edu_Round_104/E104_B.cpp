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
		ll n, k; cin >> n >> k;
		if (n % 2) {
			if (k >= n / 2 + 1) {
				ll d = n / 2;
				//ll a = k - n / 2;
				k += (k - 1) / d;
				//k += n / 2;
				//--k;
				cout << (k % n ? k % n : n) << "\n";
			}
			else cout << k << "\n";
		} else {
			cout << (k % n ? k % n : n) << "\n";
		}
	}
}
