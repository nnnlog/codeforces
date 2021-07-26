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
	cin.ignore();
	while (T--) {
		string str;
		getline(cin, str);
		/*for (int i = 0; i < str.size(); i++)
			if (str[i] == '0') {
				str.erase(str.begin() + i);
				--i;
			} else break;
		reverse(all(str));
		for (int i = 0; i < str.size(); i++)
			if (str[i] == '0') {
				str.erase(str.begin() + i);
				--i;
			} else break;*/
		cout << str.size() << "\n";
	}
}
