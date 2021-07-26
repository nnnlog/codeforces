#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	int T; cin >> T;
	vector<string> ans = {"1", "10", "100"};
	while (T--) {
		int n; cin >> n;
		for (int i = 0; i < n; i++) cout << ans[i % 3] << " ";
		cout << "\n";
	}
}
