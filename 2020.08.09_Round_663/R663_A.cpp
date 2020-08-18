#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);
 
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		for (int i = n / 2; i >= 1; i--) cout << i << " ";
		for (int i = n / 2 + 1; i <= n; i++) cout << i << " ";
		cout << "\n";
	}
}
