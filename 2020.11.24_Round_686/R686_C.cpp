#include <bits/stdc++.h>

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

	int T;
	cin >> T;
	while (T--) {
		unordered_map<int, int> cnt, index;
		int n, i = 0; cin >> n;
		while (n--) {
			int a; cin >> a;
			cnt[a]++;
			index[a] = ++i;
		}

		int ans = 1e9;
		for (const auto &i : cnt) {
			if (i.second >= 2) continue;
			ans = min(ans, i.first);
		}

		cout << (ans == 1e9 ? -1 : index[ans]) << "\n";
	}
}
