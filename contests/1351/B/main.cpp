// https://codeforces.com/contest/1351/problem/B

#include <iostream>

using namespace std;

int main() {
	int t, a1, b1, a2, b2, aux;
	cin >> t;
	while (t--) {
		cin >> a1 >> b1 >> a2 >> b2;
		if (a1 < b1) {
			aux = a1;
			a1 = b1;
			b1 = aux;
		}
		if (a2 < b2) {
			aux = a2;
			a2 = b2;
			b2 = aux;
		}
		if (a1 == a2 && b1 + b2 == a1) {
			cout << "Yes\n";
		} else {
			cout << "No\n";
		}
	}
	return 0;
}
