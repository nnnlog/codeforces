#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T; cin >> T;
	while (T--) {
		int n, m; cin >> n >> m;
		unordered_map<int, int> index;
		vector<vector<int>> expect(n);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				int a; cin >> a;
				expect[i].push_back(a);

				if (!j) index[a] = i + 1;
			}
		}

		vector<int> ans;
		for (int i = 0; i < m; i++) {
			vector<int> tmp;
			for (int j = 0; j < n; j++) {
				int a; cin >> a;
				tmp.push_back(a);
			}

			if (index[tmp[0]]) {
				ans = tmp;
			}
		}

		for (const auto &i : ans) {
			for (const auto &v : expect[index[i] - 1]) cout << v << " ";
			cout << "\n";
		}
	}
}
