// https://codeforces.com/contest/1352/problem/C

#include <iostream>

using namespace std;

int main() {
	int t, n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		cout << (unsigned long long)(k - 1) * n / (n - 1) + 1 << endl;
	}
	return 0;
}
