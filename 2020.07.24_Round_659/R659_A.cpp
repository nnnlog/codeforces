#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);
 
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
 
		string prev = "";
		vector<int> l;
		int size = 1;
		for (int i = 0; i < n; i++) {
			int a; cin >> a;
			size = max(size, a);
			l.push_back(a);
		}
 
		prev.assign(size, 'a');
		cout << prev << "\n";
		for (const int &a : l) {
			for (int i = a; i < size; i++) prev[i] = prev[i] == 'z' ? 'a' : prev[i] + 1;
			cout << prev << "\n";
		}
	}
}