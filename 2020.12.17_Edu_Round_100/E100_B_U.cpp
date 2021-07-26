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
		ll n, sum = 0;
		cin >> n;
		vl vec(n), ans;
		for (auto &i : vec) cin >> i, sum += i;
		ans = vec;
		ll tmp = 0;
		for (int i = 0; i < n; i += 2) {
			ans[i] = 1;
			tmp += abs(1 - vec[i]);
		}
		if (2 * tmp > sum) {
			ans = vec;
			for (int i = 1; i < n; i += 2) {
				ans[i] = 1;
				tmp += abs(1 - vec[i]);
			}
		}
		for (auto &i : ans) cout << i << " ";
		cout << "\n";
	}
}
