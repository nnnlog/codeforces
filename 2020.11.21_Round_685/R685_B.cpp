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
		int n, q;
		cin >> n >> q;
		cin.ignore();
		string ln;
		getline(cin, ln);
		ln.insert(ln.begin(), ln[0]);
		ln.push_back(ln[n]);

		while (q--) {
			int a, b;
			cin >> a >> b;

			int x = 0, y = 0;
			for (int i = 1; i < a; i++)
				if (ln[i] != ln[i - 1]) x = 1;

			for (int i = n; i > b; i--)
				if (ln[i] != ln[i + 1]) y = 1;

			//cout << x << " " << y << "\n";

			if (x || y || (a > 1 && ln[1] == ln[a]) || (b < n && ln[b] == ln[n])) cout << "YES\n";
			else cout << "NO\n";
		}
	}
}
