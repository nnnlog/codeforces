#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);
	string expected = "abacaba";

	int T;
	cin >> T;
	while (T--) {
		int n, cnt = 0, fail = false;
		cin >> n;
		string a;
		cin >> a;

		vector<int> available;
		for (int i = 0; i < n - 6; i++) {
			int flag = false, qflag = false;
			for (int j = i; j < i + 7; j++) {
				if (a[j] == '?') qflag = true;
				else if (a[j] != expected[j - i]) {
					flag = true;
					break;
				}
			}
			if (!flag) {
				if (qflag) available.push_back(i);
				else {
					if (++cnt >= 2) {
						fail = true;
						break;
					}
				}
			}
		}
		if (fail || (!cnt && available.empty()) || cnt >= 2) {
			cout << "No\n";
			continue;
		}
		if (cnt == 1) {
			cout << "Yes\n";
			for (int i = 0; i < n; i++) {
				if (a[i] == '?') a[i] = 'd';
			}
			cout << a << "\n";
		} else {
			int ans = false;
			for (int k = 0; k < available.size(); k++) {
				int p = available[k], chk[51] = {0,};
				for (int i = p; i < p + 7; i++) {
					if (a[i] == '?' && (chk[i] = 1)) a[i] = expected[i - p];
				}

				int c = 0;
				for (int i = 0; i < n - 6; i++) {
					int flag = false;
					for (int j = i; j < i + 7; j++) {
						if (a[j] != expected[j - i]) {
							flag = true;
							break;
						}
					}
					if (!flag) c++;
				}

				if (c == 1) {
					ans = true;
					break;
				} else
					for (int i = p; i < p + 7; i++)
						if (chk[i]) a[i] = '?';
			}

			if (!ans) cout << "No\n";
			else {
				for (int i = 0; i < n; i++) {
					if (a[i] == '?') a[i] = 'd';
				}
				cout << "Yes\n";
				cout << a << "\n";
			}
		}
	}
}
