#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);
 
	int T;
	cin >> T;
	while (T--) {
		int n, ans = 0, m = 1e9, M = 0;
		cin >> n;
		vector<int> l(n);
		for (int i = 0; i < n; i++) {
			cin >> l[i];
			m = min(m, l[i]);
			M = max(M, l[i]);
		}
 
		for (int sum = m; sum <= M * 2; sum++) {
			vector<int> vis(n);
			int temp = 0;
			for (int i = 0; i < n; i++) {
				if (vis[i]) continue;
				for (int j = i + 1; j < n; j++) {
					if (l[i] + l[j] != sum || vis[j]) continue;
					vis[i] = vis[j] = 1;
					temp++;
					break;
				}
			}
 
			ans = max(ans, temp);
		}
 
		cout << ans << "\n";
	}
}
