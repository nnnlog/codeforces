#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;

int mp[102][102], ans[102][102];
int n, m;

int get_safe_val(int x, int y) {
	if (x > n || x <= 0) return -1;
	if (y > m || y <= 0) return -1;
	return ans[x][y];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T;
	cin >> T;
	while (T--) {
		cin >> n >> m;

		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= m; j++)
				cin >> mp[i][j];

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				cout << mp[i][j] + (mp[i][j] % 2 != (i % 2 ? !(j % 2) : (j % 2))) << " ";
			}
			cout << "\n";
		}

	}
}
