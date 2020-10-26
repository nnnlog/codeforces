#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

ull MOD = 1000000007, vis[1001], dp[1001][1001];

ull fact(ull n) {
	ull ret = 1;
	for (ull i = 2; i <= n; i++) ret *= i, ret %= MOD;
	return ret;
}

ull ncr(ull n, ull r) {
	if (dp[n][r]) {
		return dp[n][r];
	}

	if (!n || !r || n == r || n == n - r) {
		return 1;
	}

	return dp[n][r] = (ncr(n - 1, r) + ncr(n - 1, r - 1)) % MOD;
}

ull npr(ull n, ull r) {
	if (n < r) return 0;

	ull ret = fact(r);
	ret *= ncr(n, r);
	ret %= MOD;

	return ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	ull n, x, pos;
	cin >> n >> x >> pos;
	ull ans = 1, up = 0, down = 0;

	ull l = 0, r = n;
	while (l < r) {
		ull mid = l + r >> 1;
		//cout << l << " " << r << " " << mid << "\n";

		if (mid <= pos) {
			if (!vis[mid] && mid != pos) down++;
			l = mid + 1;
		} else {
			if (!vis[mid]) up++;
			r = mid;
		}
		vis[mid] = 1;
	}

	for (ull i = 2; i <= n - 1 - up - down; i++) ans *= i, ans %= MOD;

	ans *= npr(n - x, up);
	ans %= MOD;
	ans *= npr(x - 1, down);
	ans %= MOD;

	//cout << "-\n";
	//cout << npr(n - x, up) << " " << npr(x - 1, down) << "\n";

	//cout << "U: " << up << " " << "D: " << down << "\n";

	cout << ans;
}
