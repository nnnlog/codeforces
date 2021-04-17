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
		cin >> n >> ws;
		string s;
		cin >> s;

		int f = 1;

		vpii sum(n + 1);
		for (int i = 1; i <= n; i++) {
			sum[i] = sum[i - 1];
			if (s[i - 1] == 'T') ++sum[i].first;
			else ++sum[i].second;

			if (sum[i].second > sum[i].first) f = 0;
		}

		sum.assign(n + 1, {0, 0});
		reverse(all(s));
		for (int i = 1; i <= n; i++) {
			sum[i] = sum[i - 1];
			if (s[i - 1] == 'T') ++sum[i].first;
			else ++sum[i].second;

			if (sum[i].second > sum[i].first) f = 0;
		}

		if (sum.back().first != sum.back().second * 2) f = 0;

		cout << (f ? "YES" : "NO") << "\n";
	}
}
