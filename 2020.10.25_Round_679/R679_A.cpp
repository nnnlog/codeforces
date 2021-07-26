#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++) cin >> arr[i];

		//sort(arr.begin(), arr.end());

		for (int i = 0; i < n / 2; i++)
			cout << arr[n - i - 1] << " ";
		for (int i = 0; i < n / 2; i++)
			cout << -arr[n / 2 - i - 1] << " ";

		cout << "\n";

	}
}
