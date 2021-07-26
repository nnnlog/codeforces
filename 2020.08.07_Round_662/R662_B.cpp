#include <bits/stdc++.h>
 
using namespace std;
 
vector<int> cnt(100001);
map<int, set<int>, greater<>> mp;
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);
 
	int n;
	cin >> n;
	while (n--) {
		int a;
		cin >> a;
		cnt[a]++;
	}
 
	for (int i = 1; i <= 100000; i++)
		if (cnt[i]) mp[cnt[i]].insert(i);
 
	int k;
	cin >> k;
	while (k--) {
		char c;
		cin >> c;
		int a;
		cin >> a;
 
		mp[cnt[a]].erase(a);
		if (c == '+') cnt[a]++;
		else --cnt[a];
		mp[cnt[a]].insert(a);
 
		int one = 0, two = 0;
		for (const auto &b : mp) {
			if (b.second.empty()) continue;
			if ((one && two >= 2) || b.first < 2) break;
 
			if (one) {
				if (b.first >= 4) two = 2;
				else two = (two + 1ULL) * b.second.size();
				continue;
			}
 
			if (b.first >= 8) one = two = 2;
			else if (b.first >= 6) one = ++two;
			else if (b.first >= 4) {
				one = 1;
				if (b.second.size() >= 2) two = 2;
			}
			else ++two;
 
			one *= b.second.size();
			two *= b.second.size();
			//cout << b.first << ":" << b.second.size() << "\n";
		}
 
		if (one && two >= 2) cout << "YES";
		else cout << "NO";
 
		cout << "\n";
	}
}
