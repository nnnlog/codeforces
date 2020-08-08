#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);
 
	int T;
	cin >> T;
	while (T--) {
		int n, flag = 0;
		vector<int> l;
		cin >> n;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			l.push_back(a);
		}
		sort(l.begin(), l.end());
		for (int i = 1; i < n; i++) if (abs(l[i] - l[i - 1]) > 1) flag = 1;
 
		cout << (flag ? "NO" : "YES") << "\n";
	}
}
