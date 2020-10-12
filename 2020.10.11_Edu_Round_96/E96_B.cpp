#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T;
	cin >> T;
	while (T--) {
		ll n, k;
		cin >> n >> k;
		vector<ll> arr(n);
		for (int i = 0; i < n; i++) cin >> arr[i];
		sort(arr.begin(), arr.end());

		for (ll i = n - 2; i >= 0 && k > 0; i--) {
			arr[n - 1] += arr[i];
			arr[i] = 0;
			--k;
		}

		sort(arr.begin(), arr.end());
		cout << arr[n - 1] - arr[0] << "\n";
	}
}
