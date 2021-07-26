#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
ll solve(ll a, ll b, ll x, ll y, ll n) {
	ll diff = min(a - x, n);
	a -= diff;
	n -= diff;
 
	b -= n;
	b = max(b, y);
	return a * b;
	//return {a * b, {a, b}};
}
 
ll solve2(ll a, ll b, ll x, ll y, ll n) {
	ll diff = min(b - y, n);
	b -= diff;
	n -= diff;
 
	a -= n;
	a = max(a, x);
	return a * b;
	//return {a * b, {a, b}};
}
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);
 
	int T; cin >> T;
	while (T--) {
		ll a, b, x, y, n; cin >> a >> b >> x >> y >> n;
 
		//auto ret1 = solve(a, b, x, y, n), ret2 = solve2(a, b, x, y, n);
		//auto sel = ret1.first > ret2.first ? ret2 : ret1;
		//cout << sel.second.first << " " << sel.second.second << "\n";
		cout << min(solve(a, b, x, y, n), solve2(a, b, x, y, n)) << "\n";
	}
}
