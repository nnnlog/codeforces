#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T = 1;
	cin >> T;
	while (T--) {
		int n; cin >> n;
		vi vec(n);
		for (auto &i : vec) cin >> i;
		vi ans(n);
		int l = 0;
		for (int i = 0; i < n / 2; i++) {
			ans[l++] = vec[i];
			ans[l++] = vec[n - i - 1];
		}
		ans[n - 1] = vec[n / 2];
		for (auto &i : ans) cout << i << " ";
		cout << "\n";
	}
}
