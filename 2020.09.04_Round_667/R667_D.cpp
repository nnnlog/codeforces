#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int digit(ll a) {
	int ret = 0;
	a *= 10;
	while (a /= 10) ret += a % 10;
	return ret;
}
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);
 
	int T;
	cin >> T;
	while (T--) {
		ll n, origin, s;
		cin >> n >> s;
		origin = n;
 
		ll i = 1;
		while (digit(n) > s) {
			while ((n / i) % 10 == 0) i *= 10;
			n += i;
			//cout << n << "\n";
		}
		cout << n - origin << "\n";
	}
}
