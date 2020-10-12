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
		int n; cin >> n;
		cout << "2\n";

		if (n > 2) {
			cout << n - 2 << " " << n << "\n";
			cout << n - 1 << " " << n - 1 << "\n";
			for (int i = n - 3; i >= 1; i--) {
				cout << i << " " << i + 2 << "\n";
			}
		} else cout << "1 2\n";
	}
}
