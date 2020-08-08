// https://codeforces.com/contest/1399/problem/B

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

void solve() {
	unsigned n, a[50], b[50];
	unsigned min_a = -1, min_b = -1;
	unsigned long long ans = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < min_a) min_a = a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		if (b[i] < min_b) min_b = b[i];
	}

	for (int i = 0; i < n; i++) {
		int diff_a = a[i] - min_a;
		int diff_b = b[i] - min_b;
		ans += min(diff_a, diff_b) + abs(diff_a - diff_b);
	}

	cout << ans << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}
