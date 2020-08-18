#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);
 
	int T; cin >> T;
	while (T--) {
		int n, prev = 0, seq = 1; cin >> n;
		cin >> prev;
		for (int i = 1; i < n; i++) {
			int a; cin >> a;
			if (prev != a) seq = 0;
		}
 
		cout << (!seq ? 1 : n) << "\n";
	}
}
