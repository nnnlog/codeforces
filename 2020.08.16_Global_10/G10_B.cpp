#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);
 
	int T;
	cin >> T;
	while (T--) {
		long long n, k, mx_value = -1e9;
		cin >> n >> k;
		vector<long long> l(n), snd(n);
		for (int i = 0; i < n; i++) {
			cin >> l[i];
			mx_value = max(mx_value, l[i]);
		}
 
		long long mx2_v = -1e9;
		for (int i = 0; i < n; i++) {
			l[i] = mx_value - l[i];
			mx2_v = max(mx2_v, l[i]);
		}
 
		for (int i = 0; i < n; i++) {
			snd[i] = mx2_v - l[i];
		}
 
		if (k % 2) for (const auto &i : l) cout << i << " ";
		else for (const auto &i : snd) cout << i << " ";
		cout << "\n";
	}
}
