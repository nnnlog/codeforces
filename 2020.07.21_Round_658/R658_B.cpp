#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	int T;
	cin >> T;
	while (T--) {
		bool winner = false, ans = false;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			if (a >= 2) ans = true;
			if (!ans) winner = !winner;
		}

		cout << (ans ? (!winner ? "First" : "Second") : (n % 2 ? "First" : "Second")) << "\n";
	}
}