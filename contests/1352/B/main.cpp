// https://codeforces.com/contest/1352/problem/B

#include <iostream>

using namespace std;

int main() {
	int t, n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		if (n % 2 && k % 2 || !(n % 2) && !(k % 2)) {
			if (n >= k) {
				cout << "YES\n";
				for (int i = 0; i < k - 1; i++) {
					cout << "1 ";
				}
				cout << n - k + 1 << endl;
			} else cout << "NO\n";
		}
		else if (n % 2 == 0) {
			if (n >= k * 2) {
				cout << "YES\n";
				for (int i = 0; i < k - 1; i++) {
					cout << "2 ";
				}
				cout << n - 2 * (k - 1) << endl;
			} else cout << "NO\n";
		} else cout << "NO\n";
	}
	return 0;
}
