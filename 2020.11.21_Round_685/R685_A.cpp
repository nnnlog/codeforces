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
		ll n, ans = 0;
		cin >> n;

		if (n == 1) cout << "0\n";
		else if (n == 2) cout << "1\n";
		else if (n == 3) cout << "2\n";
		else {
			int f = 0;
			if (n % 2) f = 1;
			cout << 2 + f << "\n";
		}
	}
}
