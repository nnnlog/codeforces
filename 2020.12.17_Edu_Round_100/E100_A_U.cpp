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
		int a, b, c; cin >> a >> b >> c;
		int sum = (a + b + c);
		int n = sum / 9;

		cout << (sum % 9 == 0 && n > 0 && a >= n && c >= n && b >= n ? "yes" : "no") << "\n";
	}
}
