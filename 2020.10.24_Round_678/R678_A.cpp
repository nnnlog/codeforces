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
		int sum = 0, a;
		for (int i = 0; i < n; i++) cin >> a, sum += a;
		cout << (sum == m ? "YES" : "NO") << "\n";
	}
}
