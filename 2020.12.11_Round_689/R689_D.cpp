#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;

int n, q;
vl sum;
unordered_map<ll, int> mp;
vl arr;

vl seg;

ll seg_i(int node, int start, int end) {
	if (start == end) return seg[node] = arr[start];
	int mid = start + end >> 1;
	return seg[node] = max(seg_i(node * 2, start, mid), seg_i(node * 2 + 1, mid + 1, end));
}

ll query(int node, int start, int end, int left, int right) {
	if (left <= start && end <= right) return seg[node];
	if (left > end || start > right) return 0;
	int mid = start + end >> 1;
	return max(query(node * 2, start, mid, left, right), query(node * 2 + 1, mid + 1, end, left, right));
}

void init(int start, int end) {
	if (start > end) return;
	//cout << start << " " << end << "\n";
	if (start == end) mp[sum[start] - sum[start - 1]] = 1;
	else {
		mp[sum[end] - sum[start - 1]] = 1;

		//ll mid_v = query(1, 1, n, start, end);
		ll mid_v = (arr[start] + arr[end]) >> 1;
		int mid = upper_bound(arr.begin() + start, arr.begin() + end + 1, mid_v) - arr.begin() - 1;
		//cout << "V: " << mid_v << " " << mid << "\n";
		if (mid == end) return;
		init(start, mid);
		init(mid + 1, end);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T = 1;
	cin >> T;
	while (T--) {
		cin >> n >> q;
		sum.assign(n + 1, 0);
		arr.assign(n + 1, 0);
		for (int i = 1; i <= n; i++) {
			cin >> arr[i];
		}

		mp.clear();

		sort(all(arr));
		for (int i = 1; i <= n; i++) sum[i] = sum[i - 1] + arr[i];

		//seg.assign(n * 4, 0);
		//seg_i(1, 1, n);
		init(1, n);

		while (q--) {
			int a; cin >> a;
			cout << (mp[a] ? "Yes" : "No") << "\n";
		}
	}
}
