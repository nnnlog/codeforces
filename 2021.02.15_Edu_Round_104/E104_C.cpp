#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pld;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ld> vld;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<pld> vpld;
typedef unordered_map<int, int> mpii;

int s(int a) {
	if (a < 0) return 0;
	if (a > 0) return 3;
	return 1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T = 1;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		//vector<vi> vec(n + 1, vi(n + 1));
		//vi val(n + 1);
		if (!(n % 2)) {
			for (int i = 1; i < n; i++) {
				int nxt = i % 2 ? 0 : 1;
				for (int j = i + 1; j <= n; j++) {
					cout << nxt << " ";
					//val[i] += s(nxt);
					//cout << "\n" << i << " " << s(nxt) << "\n";
					//val[j] += s(-nxt);
					if (!nxt) nxt = 1;
					nxt *= -1;
				}
			}
		} else {
			int nxt = 1;
			for (int i = 1; i < n; i++) {
				for (int j = i + 1; j <= n; j++) {
					cout << nxt << " ";
					//val[i] += s(nxt);
					//val[j] += s(-nxt);
					nxt *= -1;
				}
			}
		}
		//cout << "\n SC: ";
		//for (int i = 1; i <= n; i++) cout << val[i] << " ";
/*
		for (int i = 1; i < n; i++)
			for (int j = i + 1; j <= n; j++)
				cout << vec[i][j] << " ";*/
		cout << "\n";
	}
}
