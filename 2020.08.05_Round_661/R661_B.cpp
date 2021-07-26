#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);
 
	int T;
	cin >> T;
	while (T--) {
		long long n, minA = 1e9, minB = 1e9, ans = 0;
		cin >> n;
		vector<long long> a(n), b(n);
 
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			minA = min(minA, a[i]);
		}
 
		for (int i = 0; i < n; i++) {
			cin >> b[i];
			minB = min(minB, b[i]);
		}
 
		for (int i = 0; i < n; i++) {
			if (a[i] > minA) {
				long long diff = a[i] - minA;
				b[i] = max(minB, b[i] - diff);
				ans += diff;
			}
			if (b[i] > minB) ans += b[i] - minB;
		}
 
		cout << ans << "\n";
	}
}
