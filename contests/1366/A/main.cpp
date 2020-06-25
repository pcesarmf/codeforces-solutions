// https://codeforces.com/contest/1366/problem/A

#include <iostream>
#include <cmath>

using namespace std;

int a, b;
int ans;

void solve() {
	cin >> a >> b;
	ans = min(min(a, b), (a + b) / 3);
	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
