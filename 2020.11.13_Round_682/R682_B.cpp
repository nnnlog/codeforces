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
		int n, f = 0; cin >> n;
		unordered_map<int, int> vec;
		for (int i = 0; i < n; i++) {
			int a; cin >> a;
			vec[a]++;

			if (vec[a] >= 2) f = 1;
		}

		cout << (f ? "YES" : "NO") << "\n";
	}
}
