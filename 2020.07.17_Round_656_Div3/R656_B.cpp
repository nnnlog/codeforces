#include <bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	int T; cin >> T;
	while (T--) {
		int n, vis[100] = { 0, }; cin >> n;
		for (int i = 0; i < 2 * n; i++) {
			int a; cin >> a;
			if (!vis[a]) {
				vis[a] = 1;
				cout << a << " ";
			}
		}
		cout << "\n";
	}
}