// https://codeforces.com/contest/1352/problem/F

#include <iostream>

using namespace std;

int main() {
	int t, n0, n1, n2;
	bool x;
	cin >> t;
	while (t--) {
		cin >> n0 >> n1 >> n2;
		if (n2) {
			for (int i = 0; i < n2 + 1; i++) {
				cout << '1';
			}
		}
		if (n0) {
			for (int i = 0; i < n0 + 1; i++) {
				cout << '0';
			}
			x = true;
		} else {
			x = false;
		}
		for (int i = 0; i < n1 + 1 - (n0 || n2) - (n0 && n2); i++) {
			cout << x ? '1' : '0';
			x = !x;
		}
		cout << endl;
	}
	return 0;
}
