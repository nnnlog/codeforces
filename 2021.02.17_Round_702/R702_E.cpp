#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pld;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ld> vld;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<pld> vpld;
typedef unordered_map<int, int> mpii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T = 1;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		vpll vec(n + 1);
		for (int i = 1; i <= n; i++) cin >> vec[i].first, vec[i].second = i;
		sort(all(vec));
		vl sum(n + 1);
		for (int i = 1; i <= n; i++) sum[i] = sum[i - 1] + vec[i].first;
		int st = n;
		int R = 1;
		for (int i = 1; i <= n; i++) {
			if (i < n && vec[i].first == vec[i + 1].first) continue;
			R = max(R, i);
			while (R < n) {
				if (sum[R] < vec[R + 1].first) break;
				++R;
			}
			if (R == n) {
				st = i;
				break;
			}
		}

		vl ans;
		for (int i = 1; i <= n; i++)
			if (vec[i].first >= vec[st].first) ans.emplace_back(vec[i].second);
		sort(all(ans));
		cout << ans.size() << "\n";
		for (const auto &i : ans) cout << i << " ";
		cout << "\n";
	}
}
