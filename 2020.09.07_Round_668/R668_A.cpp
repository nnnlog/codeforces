#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		vector<int> vec(n);
		while (n--) cin >> vec[n];
		for (const auto &i : vec) cout << i << " ";
		cout << "\n";
	}
}
