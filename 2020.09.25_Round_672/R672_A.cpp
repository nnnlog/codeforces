#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	int T;
	cin >> T;
	while (T--) {
		int n, cnt = 0;
		cin >> n;
		vector<int> vec(n), tmp;
		for (int i = 0; i < n; i++) {
			cin >> vec[i];
		}

		int ans = 1;
		vec.erase(unique(vec.begin(), vec.end()), vec.end());
		if (n != vec.size()) {
			cout << "YES\n";
			continue;
		}
		n = vec.size();
		tmp = vec;



		sort(tmp.begin(), tmp.end());
		for (int i = 0; i < n; i++)
			if (tmp[i] != vec[i]) {
				ans = 0;
				break;
			}

		sort(tmp.begin(), tmp.end(), greater<>());
		for (int i = 0; i < n; i++)
			if (tmp[i] != vec[i]) {
				ans = 1;
				break;
			}

		cout << (ans ? "YES" : "NO") << "\n";
	}
}
