#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

vector<int> vec;
int dp[201][401];

int solve(int i, int base_i) {
	if (dp[i][base_i]) return dp[i][base_i];
	if (i == vec.size()) return 0;
	//cout << i << " " << base_i << "\n";
	int ret = 1e9;
	for (int k = base_i; k <= 400; k++) {
		ret = min(ret, solve(i + 1, k + 1) + abs(vec[i] - k));
	}
	return dp[i][base_i] = ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T;
	cin >> T;
	while (T--) {
		int n; cin >> n;
		vec.assign(n, 0);

		for (int i = 0; i < 200; i++)
			for (int j = 0; j < 400; j++)
				dp[i][j] = 0;

		for (int i = 0; i < n; i++) cin >> vec[i];

		sort(vec.begin(), vec.end());

		cout << solve(0, 1) << "\n";
	}
}
