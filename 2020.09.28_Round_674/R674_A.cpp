#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	int T; cin >> T;
	while (T--) {
		int n, x; cin >> n >> x;
		if (n <= 2) cout << "1\n";
		else cout << (n - 2) / x + ((bool)((n - 2) % x)) + 1 << "\n";
	}
}
