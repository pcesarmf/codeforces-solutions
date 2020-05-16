// https://codeforces.com/contest/1355/problem/B

#include <iostream>
#include <algorithm>

#define MAXN 200000

using namespace std;

int main() {
	int t, n, x, c;
	int e[MAXN];

	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> e[i];
		}
		sort(e, e + n);
		x = 0;
		c = 0;
		for (int i = 0; i < n; i++) {
			c++;
			if (e[i] <= c) {
				x++;
				c = 0;
			}
		}
		cout << x << endl;
	}
	return 0;
}
