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
		int n; cin >> n; cin.ignore();
		string ln; getline(cin, ln);
		vector<pair<string, string>> expect = {
				{"2", "020"},
				{"20", "20"},
				{"202", "0"},
				{"2020", ""},
				{"", "2020"},
		};
		int f = 0;
		for (const auto &[a, b] : expect) {
			int x = ln.find(a), y = ln.find(b, n - b.size());
			if (x == 0 && y != string::npos) {
				f = 1;
			}
		}
		cout << (f ? "YES" : "NO") << "\n";
	}
}
