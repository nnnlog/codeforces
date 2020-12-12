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

	cout << fixed;
	cout.precision(15);

	int T = 1;
	cin >> T;
	while (T--) {
		int n, m; cin >> n >> m;
		vi arr(n);
		vector<pair<int, long double>> vec(m);
		for (auto &i : arr) cin >> i, --i;
		for (auto &v : vec) cin >> v.first >> v.second, --v.first;
		//sort(all(vec), greater<>());

		int where = n - 1;
		for (int i = n - 1; i >= 0; i--) {
			if (arr[i] == i) {
				where = i - 1;
			} else break;
		}

		long double ans = 1;
		for (auto &i : vec)
			if (where >= 0 && i.first >= where) ans *= (1.0 - i.second);

			//cout << where << " " ;
		cout << (where >= 0 ? 1.0 - ans : 1.0) << "\n";
	}
}
