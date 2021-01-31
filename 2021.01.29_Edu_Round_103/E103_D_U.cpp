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

vi UF, unc;
int find(int a) {
	return UF[a] = UF[a] == a ? a : find(UF[a]);
}
void merge(int a, int b) {
	a = find(a), b = find(b);
	if (a != b) UF[a] = b, unc[b] += unc[a], unc[a] = 0;
}
int get_id(int i, int n, int x) {
	return i * (n + 1) + x;
}
void init(int sz) {
	UF.resize(sz * 2 + 2);
	unc.resize(sz * 2 + 2);
	int i = 0;
	for (auto &j : UF) j = i++;
	for (auto &c : unc) c = 1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T = 1;
	cin >> T;
	while (T--) {
		int n; cin >> n;
		init(n);
		vi A(n), B;
		for (auto &i : A) {
			char a; cin >> a;
			i = a == 'L';
			B.push_back(!i);
		}
		for (int i = 1; i <= n; i++) {
			if (A[i - 1]) merge(get_id(0, n, i), get_id(1, n, i - 1));
			if (B[i - 1]) merge(get_id(1, n, i), get_id(0, n, i - 1));
		}

		for (int i = 0; i <= n; i++) cout << unc[find(i)] << " ";
		cout << "\n";
	}
}
