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
		int n;
		cin >> n;
		if (n % 2) {
			for (int i = n - 1; i >= 1; i--) {
				if (i == n / 2) cout << n << " ";
				cout << i << " ";
			}
		}
		else for (int i = n; i >= 1; i--) cout << i << " ";
		cout << "\n";
	}
}
