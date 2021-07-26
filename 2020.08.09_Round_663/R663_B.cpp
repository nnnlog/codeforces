#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);
 
	int T;
	cin >> T;
	while (T--) {
		int w, h;
		cin >> h >> w;
		vector<vector<char>> grid(w + 1, vector<char>(h + 1)), onebone(w + 1, vector<char>(h + 1));
		for (int y = 1; y <= h; y++)
			for (int x = 1; x <= w; x++)
				cin >> grid[x][y];
 
		int x = w, y = h, ans = 0;
 
		for (int yy = 1; yy < h; yy++) if (grid[x][yy] == 'R') ans++;
		for (int xx = 1; xx < w; xx++) if (grid[xx][y] == 'D') ans++;
 
		cout << ans << "\n";
	}
}
