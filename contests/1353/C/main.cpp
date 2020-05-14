// https://codeforces.com/contest/1353/problem/C

#include <iostream>

#define MAXN 250000

using namespace std;

int main() {
	int t, n;
	unsigned long long f[MAXN];
	f[0] = 0;
	for (unsigned long long i = 1; i < MAXN; i++) {
		f[i] = f[i - 1] + 8 * i * i;
	}
	cin >> t;
	while (t--) {
		cin >> n;
		cout << f[n >> 1] << endl;
	}
	return 0;
}
