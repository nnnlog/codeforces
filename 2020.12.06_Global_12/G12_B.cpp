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
		int n, k; cin >> n >> k;
		vector<pii> vec(n);
		for (auto &[a, b] : vec) cin >> a >> b;
		sort(all(vec));
		auto a = vec[n / 2 - !(n % 2)];
		int f = 0;
		for (const auto &curr : vec) {
			int b = 0;
			for (const auto &i : vec) {
				if (abs(curr.first - i.first) + abs(curr.second - i.second) > k) {
					b = 1;
					break;
				}
			}

			if (!b) {
				f = 1;
				break;
			}
		}

		cout << (!f ? -1 : 1) << "\n";
	}
}
