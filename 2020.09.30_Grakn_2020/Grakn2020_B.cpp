#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	int T;
	cin >> T;
	while (T--) {
		int n, k, sz;
		cin >> n >> k;
		set<int> s;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			s.insert(a);
		}
		sz = s.size();

		if (k == 1) {
			cout << (s.size() == 1 ? 1 : -1) << "\n";
		} else {
			sz -= k;
			sz = max(sz, 0);
			--k;
			cout << 1 + sz / k + (bool) (sz % k) << "\n";
		}
	}
}
