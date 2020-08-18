#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);
 
	int n, m, s1, s2;
	cin >> n >> m >> s1 >> s2;
	cout << s1 << " " << s2 << "\n";
	for (int x = s2 - 1; x > 0; x--)
		cout << s1 << " " << x << "\n";
	for (int x = s2 + 1; x <= m; x++)
		cout << s1 << " " << x << "\n";
 
	if (s2 == 1) {
		int i = 1;
		for (int y = s1 - 1; y > 0; y--) {
			if (i++ % 2)
				for (int x = 1; x <= m; x++) {
					cout << y << " " << x << "\n";
				}
			else
				for (int x = m; x >= 1; x--) {
					cout << y << " " << x << "\n";
				}
		}
		for (int y = s1 + 1; y <= n; y++) {
			if (i++ % 2)
				for (int x = 1; x <= m; x++) {
					cout << y << " " << x << "\n";
				}
			else
				for (int x = m; x >= 1; x--) {
					cout << y << " " << x << "\n";
				}
		}
	} else {
		int i = 0;
		for (int y = s1 - 1; y > 0; y--) {
			if (i++ % 2)
				for (int x = 1; x <= m; x++) {
					cout << y << " " << x << "\n";
				}
			else
				for (int x = m; x >= 1; x--) {
					cout << y << " " << x << "\n";
				}
		}
		for (int y = s1 + 1; y <= n; y++) {
			if (i++ % 2)
				for (int x = 1; x <= m; x++) {
					cout << y << " " << x << "\n";
				}
			else
				for (int x = m; x >= 1; x--) {
					cout << y << " " << x << "\n";
				}
		}
	}
}
