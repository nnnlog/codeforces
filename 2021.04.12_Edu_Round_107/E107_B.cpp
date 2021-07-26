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

ll lg(ld a, ld b) {
	return floor(log(a) / log(b));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	int T = 1;
	cin >> T;
	while (T--) {
		int a, b, c;
		cin >> a >> b >> c;
		cout << (ll)(powl(3, lg(powl(10, a + 1 - c), 3)) * powl(10, c - 1)) << " " << (ll)(powl(7, lg(powl(10, b + 1 - c), 7)) * powl(10, c - 1)) << "\n";
	}
}
