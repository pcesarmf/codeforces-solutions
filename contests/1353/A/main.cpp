// https://codeforces.com/contest/1353/problem/A

#include <iostream>

using namespace std;

int main() {
	int t, n, m;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		if (n == 1) cout << "0\n";
		else if (n == 2) cout << m << endl;
		else cout << m + m << endl;
	}
	return 0;
}
