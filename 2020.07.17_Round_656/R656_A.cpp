#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	int T; cin >> T;
	while (T--) {
		int v[3] = { 0, };
		for (int i = 0; i < 3; i++) cin >> v[i];
		sort(v, v + 3);
		if (v[1] != v[2]) cout << "NO\n";
		else cout << "YES\n" << v[2] << " " << v[0] << " " << 1 << "\n";
	}
}
