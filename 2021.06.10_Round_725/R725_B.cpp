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

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T = 1;
	cin >> T;
	while (T--) {
		int n, sum =0 ; cin >> n;
		vi vec(n);
		for (auto &i : vec) cin >> i, sum+=i;
		if (sum % n) {
			cout << "-1\n";
			continue;
		}
		int ans = 0;
		for (int i : vec) if (sum / n < i) ++ans;
		cout << ans << "\n";
	}
}
