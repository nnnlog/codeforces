#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T; cin >> T;
	while (T--) {
		ll l, r; cin >> l >> r;
		cout << (l * 2 > r ? "YES" : "NO") << "\n";
	}
}
