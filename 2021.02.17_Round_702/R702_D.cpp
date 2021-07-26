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

vi vec, ans;

void solve(int l, int r, int d) {
	if (l == r) ans[l] = d;
	if (l >= r) return;
	auto mx = max_element(vec.begin() + l, vec.begin() + r + 1);
	ans[mx - vec.begin()] = d++;
	int mid = mx - vec.begin();
	solve(l, mid - 1, d);
	solve(mid + 1, r, d);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T = 1;
	cin >> T;
	while (T--) {
		int n; cin >> n;
		vec.assign(n, 0), ans.assign(n, 0);
		for (auto &i : vec) cin >> i;
		solve(0, n - 1, 0);
		for (const auto &i : ans) cout << i << " ";
		cout << "\n";
	}
}
