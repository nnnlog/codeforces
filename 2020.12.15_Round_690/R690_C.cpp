#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T = 1;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;

		if (n > 45) {
			cout << -1 << "\n";
			continue;
		}

		string ans;
		for (int i = 9; i >= 1; i--) {
			if (n < i) continue;
			ans.push_back(i + '0');
			n -= i;
		}

		reverse(all(ans));
		cout << ans << "\n";
	}
}
