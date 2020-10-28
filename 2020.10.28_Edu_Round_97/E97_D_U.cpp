#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T;
	cin >> T;
	while (T--) {
		int n, ans = 0, prev = 1e9;

		vector<vector<int>> vec;
		vector<int> tmp;

		cin >> n;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;

			if (a == 1) continue;

			if (prev > a && !tmp.empty()) {
				vec.push_back(tmp);
				tmp.clear();
			}
			tmp.push_back(a);

			prev = a;
		}

		if (!tmp.empty()) vec.push_back(tmp);

		int child_cnt = 1, parent_cnt = 1;

		for (const auto &v : vec) {
			//cout << "VEC: ";
			//for (const auto &i : v) cout << i << " ";
			//cout << "\nDE: " << parent_cnt << " " << child_cnt << " ANS" << ans << "\n";

			parent_cnt--;
			if (parent_cnt == 0) {
				ans++;
				parent_cnt = child_cnt;
				child_cnt = 0;
			}
			child_cnt += v.size();
		}

		cout << ans << "\n";
	}
}
