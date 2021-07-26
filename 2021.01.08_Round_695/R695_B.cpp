#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
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
		vi vec(n);
		for (auto &i : vec) cin >> i;

		int ans = 0, mx = 0;
		vi cnt(n);
		for (int j = 1; j < n - 1; j++) {
			//int mn = j - 1;
			//if (vec[j - 1] > vec[j + 1]) mn = j + 1;
			if (vec[j - 1] < vec[j] && vec[j] > vec[j + 1]) cnt[j]++, ans++;
			if (vec[j - 1] > vec[j] && vec[j] < vec[j + 1]) cnt[j]++, ans++;
		}

		for (int i = 1; i < n - 1; i++) {
			if (cnt[i]) {
				int t = vec[i], a = 0;
				vec[i] = vec[i - 1];
				for (int j = max(1, i - 1); j <= min(n - 2, i + 1); j++) {
					int f = 0;
					if (vec[j - 1] < vec[j] && vec[j] > vec[j + 1]) f++;
					if (vec[j - 1] > vec[j] && vec[j] < vec[j + 1]) f++;
					if (f && !cnt[j]) --a;
					if (!f && cnt[j]) ++a;
				}
				mx = max(mx, a);
				vec[i] = vec[i + 1];
				a = 0;
				for (int j = max(1, i - 1); j <= min(n - 2, i + 1); j++) {
					int f = 0;
					if (vec[j - 1] < vec[j] && vec[j] > vec[j + 1]) f++;
					if (vec[j - 1] > vec[j] && vec[j] < vec[j + 1]) f++;
					if (f && !cnt[j]) --a;
					if (!f && cnt[j]) ++a;
				}
				mx = max(mx, a);
				vec[i] = t;
			}
		}

		cout << max(0, ans - mx) << "\n";
	}
}
