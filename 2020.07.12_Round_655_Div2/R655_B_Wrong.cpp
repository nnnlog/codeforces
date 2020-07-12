#include <bits/stdc++.h>

using namespace std;

vector<int> prime;
bool chk[10001];

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	for (int i = 2; i <= 10000; i++) {
		if (!chk[i]) {
			prime.push_back(i);
			for (int j = i; j <= 10000; j += i) chk[j] = 1;
		}
	}

	reverse(prime.begin(), prime.end());

	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		if (n % 2 == 0) {
			cout << n / 2 << " " << n / 2 << "\n";
		} else {
			int findPrime = 0;
			for (const int &i : prime) {
				if (n % i == 0) {
					findPrime = i;
					break;
				}
			}

			if (!findPrime || findPrime == n) cout << 1 << " " << n - 1 << "\n";
			else {
				bool flag = 0;
				for (int i = n / (2 * findPrime) * findPrime; i >= findPrime; i -= findPrime) {
					if (n % i == 0) {
						flag = 1;
						cout << n - i << " " << i << "\n";
						break;
					}
				}
				
				if (!flag) cout << 1 << " " << n - 1 << "\n";
			}
		}


	}
}
