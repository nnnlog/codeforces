#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);
 
	int T;
	cin >> T;
	while (T--) {
		long long a, b, c, d, e, f;
		cin >> a >> b >> c >> d >> e >> f;
		cout << (2LL * min(c, e) - min(max(0LL, f - a - (c - min(c, e))), max(0LL, b - d - (e - min(c, e)))) * 2LL) << "\n";
	}
}
