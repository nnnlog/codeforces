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
		vector<char> vec(n);
		for (auto &i:vec)cin >> i, i -= '0';
		int prev = -1;
		for (int i = 0; i < n; i++) {
			for (int j = 2; j >= 0; j--) {
				if (prev == j) continue;
				int a = j - vec[i];
				if (a > 1)continue;
				cout << a;
				prev = j;
				break;
			}
		}
		cout << "\n";
	}
}
