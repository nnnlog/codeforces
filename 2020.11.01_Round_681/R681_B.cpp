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
		ll a, b; cin >> a >> b;
		ll ans = 0;

		cin.ignore();
		string line; getline(cin, line);
		int prev = -1;
		vector<int> zero;
		for (int i = 0; i < line.size(); i++) {
			if (line[i] == '1') {
				if (prev > -1 && prev != i - 1) {
					if ((i - prev - 1) * b < a) {
						for (int k = prev + 1; k < i; k++) line[k] = '1', ans += b;
					}
				}
				prev = i;
			}
		}

		int curr = 0;
		for (int i = 0; i < line.size(); i++) {
			if (line[i] == '0') curr = 0;
			else {
				if (!curr) ans += a;
				curr = 1;
			}
		}

		cout << ans << "\n";
	}
}
