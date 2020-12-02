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
		int x, y;
		cin >> x >> y;
		if (x == y) {
			cout << x - 1 << " " << y << "\n";
		} else if (x > y) {
			cout << x - 1 << " " << y << "\n";
		} else {
			cout << x - 1 << " " << y << "\n";
		}
	}
}
