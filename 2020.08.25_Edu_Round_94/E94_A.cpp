#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);
 
	int T; cin >> T;
	while (T--) {
		int n;
		cin >> n;
 
		string s; cin >> s;
		int sel = n - 1;
		while (n--) cout << s[sel];
		cout << "\n";
	}
}