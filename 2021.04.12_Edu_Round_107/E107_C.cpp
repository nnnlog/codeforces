#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pld;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ld> vld;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<pld> vpld;
typedef unordered_map<int, int> mpii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T = 1;
	//cin >> T;
	while (T--) {
		int n, q;
		cin >> n >> q;
		unordered_map<int, int> mp;
		for (int i = 1; i <= n; i++) {
			int a;
			cin >> a;
			if (!mp[a]) mp[a] = i;
		}
		while (q--) {
			int a;
			cin >> a;
			cout << mp[a] << " ";
			unordered_map<int, int> tmp;
			for (const auto &[i, j] : mp) {
				if (a != i && j < mp[a]) tmp[i] = j + 1;
				else tmp[i] = j;
			}
			tmp[a] = 1;
			mp.swap(tmp);
		}
	}
}
