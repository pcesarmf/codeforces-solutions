// https://codeforces.com/contest/1373/problem/A

#include <iostream>

using namespace std;

int a, b, c;
int x, y;

void solve() {
	cin >> a >> b >> c;
	x = y = -1;
	if ((double) c / b < a) {
		if (a < c) {
			x = 1;
		} else {
			x = -1;
		}
		y = b;
	} else {
		x = 1;
		y = -1;
	}
	cout << x << ' ' << y << endl;
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
