#include <bits/stdc++.h>

using namespace std;

typedef long double ld;
typedef pair<ld, pair<ld, ld>> pll; //time, 속력, x좌표

int comp(pll a, pll b) {
	return a.first < b.first;
}

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);
	cout.precision(6);

	int T;
	cin >> T;
	while (T--) {
		ld n, l;
		cin >> n >> l;
		vector<pll> front = {{0, {1, 0}}}, back = {{0, {1, 0}}};
		stack<ld> st;
		for (int i = 0; i < n; i++) {
			ld x;
			cin >> x;
			auto tmp = front.back();
			ld t = (x - tmp.second.second) / tmp.second.first;
			front.push_back({tmp.first + t, {tmp.second.first + 1, x}});

			st.push(l - x);
		}

		while (!st.empty()) {
			ld x = st.top();
			st.pop();

			auto tmp = back.back();
			ld t = (x - tmp.second.second) / tmp.second.first;
			back.push_back({tmp.first + t, {tmp.second.first + 1, x}});
		}
/*
		for (const auto &i : front)
			cout << i.first << " " << i.second.first << " " << i.second.second << "\n";

		cout << "---\n";
		for (const auto &i : back)
			cout << i.first << " " << i.second.first << " " << i.second.second << "\n";
*/
		ld lef = 0, rig = l;
		while (rig - lef >= 0.0000006) {
			ld mid = (lef + rig) / 2.0;
			auto front_x = *(upper_bound(front.begin(), front.end(), pll{mid, {1e9, 1e9}}, comp) - 1);
			auto back_x = *(upper_bound(back.begin(), back.end(), pll{mid, {1e9, 1e9}}, comp) - 1);

			ld front_t = mid - front_x.first, back_t = mid - back_x.first;
			ld front_dis = front_x.second.second + front_t * front_x.second.first, back_dis =
					back_x.second.second + back_t * back_x.second.first;
			/*cout << mid << "\n";
			cout << front_x.first << " " << front_x.second.first << " " << front_x.second.second << "\n";
			cout << back_x.first << " " << back_x.second.first << " " << back_x.second.second << "\n";
			cout << " " << front_t << " " << back_t << " " << front_dis << " " << back_dis << "\n";*/

			if (front_dis + back_dis >= l) {
				rig = mid;
			} else lef = mid;
		}

		cout << fixed << (lef + rig) / 2.0 << "\n";
	}
}
