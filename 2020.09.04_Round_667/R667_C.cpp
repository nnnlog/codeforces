#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);
 
	int T;
	cin >> T;
	while (T--) {
		ll n, x, y, diff_tmp, diff, prev, sz;
		cin >> n >> x >> y;
		diff = y - x;
		sz = n;
 
		string ans;
		int ans_v = 1e9;
		for (diff_tmp = 1; diff_tmp <= y - x; diff_tmp++) {
			if ((y - x) % diff_tmp == 0) {
 
				if ((y - x) / diff_tmp < n) {
					//cout << "T: " << diff_tmp << " " << (y - x) / diff_tmp << "\n";
					//sz = (y - x) / diff_tmp;
					diff = diff_tmp;
					prev = x - diff;
					sz = n;
 
					ll tmp_min = y;
					string tmp;
					for (; sz > 0 && prev < y; sz--) tmp += to_string(prev += diff) + " ";
					prev = x;
					for (; prev - diff > 0 && sz > 0; sz--) {
						tmp += to_string(prev -= diff) + " ";
					}
					prev = y;
					for (; sz > 0; sz--) tmp += to_string(prev += diff) + " ";
					tmp_min = max(tmp_min, prev);
 
					//cout << tmp << " " << tmp_min << " " << diff_tmp << "\n";
					if (tmp_min < ans_v) {
						ans_v = tmp_min;
						ans = tmp;
					}
					//cout << "DIFF: " << diff << "\n";
					//cout << diff_tmp << " " << sz << "\n";
				}
			}
		}
 
		cout << ans << "\n";
	}
}
