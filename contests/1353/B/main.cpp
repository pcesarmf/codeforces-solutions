// https://codeforces.com/contest/1353/problem/B

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t, n, k, s;
	int a[30], b[30];
	cin >> t;
	while (t--) {
		cin >> n >> k;
		s = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			s += a[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}
		sort(a, a + n);
		sort(b, b + n);
		for (int i = 0; i < k; i++) {
			if (a[i] < b[n - i - 1])
				s += (b[n - i - 1] - a[i]);
			else break;
		}
		cout << s << endl;
	}
	return 0;
}
