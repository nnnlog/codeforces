#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T;
	cin >> T;
	while (T--) {
		int n, x;
		cin >> n >> x;
		vector<int> a(n), b(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n; i++) cin >> b[i];

		sort(a.begin(), a.end(), greater<>());
		sort(b.begin(), b.end());

		int f = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] + b[i] > x) {
				f = 1;
				break;
			}
		}

		cout << (f ? "NO" : "YES") << "\n";
	}
}
