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
		multiset<int, greater<>> sv;
		set<int> dis;
		vi vec(n * 2);
		for (auto &i : vec) {
			cin >> i;
			sv.insert(i);
			dis.insert(i);
		}
		sort(all(vec), greater<>());
		int f = 1;
		if (vec[0] != vec[1]) dis.erase(vec[0]);
		for (const auto &i : dis) {
			auto s = sv;
			s.erase(s.find(i));

			int x = *(s.begin());
			s.erase(s.begin());
			vpii ans;

			while (!s.empty()) {
				int a = *(s.begin());
				s.erase(s.begin());

				auto it = s.find(x - a);
				if (it == s.end()) {
					//s.insert(a);
					break;
				}

				s.erase(it);
				ans.emplace_back(a, x - a);
				x = a;
			}

			if (s.empty()) {
				cout << "YES\n" << vec[0] + i << "\n";
				cout << vec[0] << " " << i << "\n";
				for (const auto &[a, b] : ans) cout << a << " " << b << "\n";
				f = 0;
				break;
			}
			//cout << s.size() << " " << *(s.begin()) << "\n";
		}
		if (f) cout << "NO\n";
	}
}
