#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef unordered_map<int, int> mpii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T = 1;
	cin >> T;
	while (T--) {
		ll n, f = 0, k;
		cin >> n;
		k = n;
		n *= 2;
		set<ll> tmp;
		while (n--) {
			ll a;
			cin >> a;
			if (a % 2) f = 1;
			tmp.insert(a / 2);
		}

		if (tmp.size() != k || f) {
			cout << "no\n";
			continue;
		}
		priority_queue<ll, vl> pq;
		for (const auto &i : tmp) pq.push(i);

		ll sum = 0;
		set<ll> ans;
		for (int i = k; i >= 1; i--) {
			ll top = pq.top();
			pq.pop();
			top -= sum;
			if (top <= 0) {
				f = 1;
				break;
			}
			//cout << i << " top " << top << "\n";
			if (top % i == 0) {
				ans.insert(top / i);
				sum += top / i;
				//cout << i << " " << top / i << "\n";
			} else {
				//cout << "Exit from " << i << "\n";
				f = 1;
				break;
			}
		}

		cout << (f || ans.size() != k ? "no" : "yes") << "\n";
	}
}
