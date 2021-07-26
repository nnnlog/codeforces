#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef unordered_map<int, int> mpii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T = 1;
	cin >> T;
	while (T--) {
		int a, b; cin >> a >> b;
		int x = 0, y = 0;
		string s; cin >> s;
		for (const auto &c : s) {
			if (c == 'R' && a > 0) x++;
			if (c == 'L' && a < 0) x++;
			if (c == 'U' && b > 0) y++;
			if (c == 'D' && b < 0) y++;
		}
		a = abs(a);
		b = abs(b);
		cout << (x >= a && y >= b ? "YES" : "NO") << "\n";
	}
}
