#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);
 
	int T; cin >> T;
	while (T--) {
		long long a, b; cin >> a >> b;
		cout << abs(a - b) / 10 + (bool)(abs(a - b) % 10) << "\n";
	}
}
