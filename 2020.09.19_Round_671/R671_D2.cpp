#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	int n; cin >> n;
	vector<int> vec(n), ans(n);
	for (int i = 0; i < n; i++) cin >> vec[i];
	sort(vec.begin(), vec.end());
	for (int i = 0; i < n / 2; i++) ans[i * 2 + 1] = vec[i];
	for (int i = n / 2; i < n; i++) ans[(i - n / 2) * 2] = vec[i];

	int ans_cnt = 0;
	for (int i = 1; i < n - 1; i++) if (ans[i - 1] > ans[i] && ans[i + 1] > ans[i]) ans_cnt++;
	cout << ans_cnt << "\n";
	for (const auto &v : ans) cout << v << " ";
}
