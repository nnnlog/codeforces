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
		ll n;
		cin >> n;
		vl C(n), A(n), B(n);
		for (auto &i : C) cin >> i;
		for (auto &i : A) cin >> i;
		for (auto &i : B) cin >> i;

		ll ans = 0, sum = 0, f = 0;
		for (int i = 0; i < n; i++) {
			if (A[i] == B[i]) sum = 0;
			sum += C[i] - 1 + (i > 0 ? 2 : 0);
			if (i) ans = max(ans, sum);
			//cout << i << " " << sum << "\n";
			if (i + 1 < n) {
				if (A[i + 1] > B[i + 1]) swap(A[i + 1], B[i + 1]);
				if (!f) sum -= A[i + 1] - 1 + (C[i] - B[i + 1]);
				else sum -= abs(A[i + 1] - B[i + 1]);
				f = 1;
			}
			//cout << i << " " << sum << "\n";
			if (i + 1 < n && sum < B[i + 1] - A[i + 1]) sum = B[i + 1] - A[i + 1];
			//cout << i << " " << sum << "\n";
		}

		cout << ans << "\n";
	}
}
