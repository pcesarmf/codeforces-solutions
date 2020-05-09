// https://codeforces.com/contest/1352/problem/G

#include <iostream>

using namespace std;

int main() {
	int t, n, m, i, j;
	cin >> t;
	while (t--) {
		cin >> n;
		if (n <= 3) {
			cout << "-1\n";
			continue;
		}
		for (int i = 2 - n % 2; i <= n; i += 2) {
			cout << i << " ";
		}
		cout << n - 3 << " " << n - 1 << " ";
		for (int i = n - 5; i >= 1; i -= 2) {
			cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}
