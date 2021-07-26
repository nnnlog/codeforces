#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	int T; cin >> T;
	while (T--) {
		ll n; cin >> n;
		double s = sqrt(n);
		int ss = s;
		cout << ss * 2 - (s - (double)(ss) <= 0.5 ? 1 : 0) - (s <= ss ? 1 : 0) << "\n";
	}
}
