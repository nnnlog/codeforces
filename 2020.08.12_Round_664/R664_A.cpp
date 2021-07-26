#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);
 
	int T;
	cin >> T;
	while (T--) {
		int r, g, b, w;
		cin >> r >> g >> b >> w;
		int flag = false;
		for (int i = 0; i <= min(1, min(r, min(g, b))); i++) {
			int tr = r - i, tg = g - i, tb = b - i, tw = w + i;
			if (tr % 2 + tg % 2 + tb % 2 + tw % 2 <= 1) {
				flag = true;
				break;
			}
		}
		cout << (flag ? "YES" : "NO") << "\n";
	}
}
