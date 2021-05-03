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
		int n, m, x, kk = 0; cin >> n >> m >> x;
		vpii vec(n);
		vi ans(n);
		for (auto &[a, b] : vec) cin >> a, b = kk++;
		sort(all(vec), greater<>());
		priority_queue<pii, vpii, greater<>> pq;
		while (m--) pq.push({0, m + 1});
		while (!vec.empty()) {
			auto top = pq.top(); pq.pop();
			top.first += vec.back().first;
			ans[vec.back().second] = top.second;
			vec.pop_back();
			pq.push(top);
		}
		cout << "YES\n";
		for (const auto &i : ans) cout << i << " ";
		cout << "\n";
	}
}
