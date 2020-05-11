// https://codeforces.com/contest/1323/problem/A

#include <iostream>

using namespace std;

int main() {
	int t, n, x, firstEvenPos;
	cin >> t;
	while (t--) {
		cin >> n;
		firstEvenPos = 0;
		for (int i = 1; i <= n; i++) {
			cin >> x;
			if (!firstEvenPos && x % 2 == 0)
				firstEvenPos = i;
		}
		if (n == 1 && !firstEvenPos) cout << "-1\n";
		else if (firstEvenPos) cout << "1\n" << firstEvenPos << endl;
		else cout << "2\n1 2\n";
	}
	return 0;
}
