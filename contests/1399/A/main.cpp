// https://codeforces.com/contest/1399/problem/A

#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
	int n, a[50];
	bool ans = true;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 1; i < n; i++) {
		if (a[i - 1] < a[i] - 1) {
			ans = false;
			break;
		}
	}
	cout << (ans ? "YES" : "NO") << endl;
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
