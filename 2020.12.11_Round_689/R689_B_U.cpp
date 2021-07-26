#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T = 1;
	cin >> T;
	while (T--) {
		int n, m;
		cin >> n >> m;
		vector<vector<char>> vec;
		vector<vector<int>> cnt;
		ll ans = 0, k = 0;
		cin.ignore();
		for (int i = 0; i < n; i++) {
			vec.emplace_back();
			cnt.emplace_back();
			string str;
			getline(cin, str);
			for (int j = 0; j < m; j++) {
				char a = str[j];
				vec[i].push_back(a);
				//if (a == '*') ++ans;
				cnt[k].push_back((j ? cnt[k][j - 1] : 0) + (a == '*'));
			}
			++k;
		}

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++) {
				for (int sz = 0; sz < min(n, m); sz++) {
					int s = j - sz, e = j + sz;
					if (s < 0 || e >= m) break;
					if (i + sz >= n) break;
					if (cnt[i + sz][e] - (s ? cnt[i + sz][s - 1] : 0) != e - s + 1) {
						break;
					}
					ans++;
				}
			}
		cout << ans << "\n";
	}
}
