#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);
 
	int T;
	cin >> T;
	while (T--) {
		long long n, prev = 1e9, ans = 0;
		cin >> n;
 
		vector<vector<int>> sq;
		vector<int> tmp;
		for (int i = 0; i < n; i++) {
			long long a;
			cin >> a;
			if (a > prev) {
				if (!tmp.empty()) {
					sq.push_back(tmp);
					tmp.clear();
				}
			}
			tmp.push_back(a);
			prev = a;
		}
 
		if (!tmp.empty()) sq.push_back(tmp);
 
		//cout << "-----\n";
		for (const auto &i : sq) {
			//for (const auto &k : i) cout << k << " ";
			//cout << "\n";
			ans += i[0] - i.back();
		}
 
		//cout << "-----\nANS: ";
		cout << ans << "\n";
	}
}
