#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

set<int> prime;
int u[100001];

int find_near_prime(int a) {
	int find = a;
	int ret = *prime.upper_bound(a);
	while (*(prime.lower_bound(ret - a)) == ret - a) {
		find += ret - a;
		ret = *prime.upper_bound(find);
	}
	return ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	for (int i = 2; i <= 100000; i++) {
		if (!u[i]) prime.insert(i);
		for (int k = i; k <= 100000; k += i) u[k] = 1;
	}

	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		int sz = (n - 1);
		int diff = find_near_prime(sz) - sz;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (i == n && j == n) {
					cout << find_near_prime((n - 1) * diff) - (n - 1) * diff << " ";
				}else if (i == n || j == n) cout << diff << " ";
				else cout << "1 ";
			}
			cout << "\n";
		}
	}
}
