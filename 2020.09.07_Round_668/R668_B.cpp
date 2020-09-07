#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	int T;
	cin >> T;
	while (T--) {
		long long n, sum = 0, ans = 0;
		cin >> n;
		//vector<pair<int, int>> vec;
		//deque<pair<int, int>> deq;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;

			if (a > 0) sum += a;
			if (a < 0) {
				if (sum + a < 0) {
					ans += abs(sum + a);
					sum = 0;
				}
				else sum = max(sum + a, 0LL);
			}
		}
		cout << ans << "\n";

		/*sort(vec.begin(), vec.end(), [](const auto &i, const auto &j) {
			return i.first == j.first ? i.second > j.second : i.first < j.first;
		});

		cout << "DE\n";
		for (const auto &v : vec) {
			cout << v.first << " " << v.second << "\n";
			deq.push_back(v);
		}
		cout << "\n";

		while (!deq.empty()) {
			auto first = deq.front(), back = deq.back();
			auto diff = min(abs(first.first), abs(back.first));
			first.first += diff;
			back.first -= diff;
			deq.pop_front();
			deq.pop_back();
			if (first.first) deq.push_front(first);
			if (back.first) deq.push_back(back);

			//cout << "DEQ: " << diff << " , ";
			//for (const auto &p : deq) cout << p.first << " ";
			//cout << "\n";

			if (first.second < back.second) ans += diff;
		}
		//cout << "ANS: ";*/
	}
}
