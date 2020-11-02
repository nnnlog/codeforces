#include <bits/stdc++.h>

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

	int T;
	cin >> T;
	while (T--) {
		int n; cin >> n;
		vector<ll> a(n), b(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n; i++) cin >> b[i];
		ll l = 1, r = 1e9;
		while (l < r) {
			ll mid = l + r >> 1, walk = 0;
			ll f = 0;

			for (int i = 0; i < n; i++) {
				if (a[i] > mid) {
					walk += b[i];
					if (walk > mid) {
						f = 1;
						break;
					}
				}
			}

			if (!f) r = mid;
			else l = mid + 1;
		}

		cout << (l + r >> 1) << "\n";
	}
}
