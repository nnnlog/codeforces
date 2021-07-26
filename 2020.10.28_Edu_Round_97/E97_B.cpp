#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		cin.ignore();
		string str;
		getline(cin, str);

		int ans = 1e9;
		{
			string tmp = str;
			int cnt = 0, seq = 0;
			for (int i = 1; i < n; i++) {
				if (tmp[i - 1] == tmp[i]) {
					if (!seq) cnt++;
					seq = 1;
					tmp[i] = tmp[i - 1] == '0' ? '1' : '0';
				} else seq = 0;
			}

			ans = min(ans, cnt);
		}
		{
			string tmp = str;
			int cnt = 0, seq = 0;
			for (int i = n - 1; i >= 0; i--) {
				if (tmp[i] == tmp[i + 1]) {
					if (!seq) cnt++;
					seq = 1;
					tmp[i] = tmp[i + 1] == '0' ? '1' : '0';
				} else seq = 0;
			}

			ans = min(ans, cnt);
		}

		cout << ans << "\n";
	}
}
