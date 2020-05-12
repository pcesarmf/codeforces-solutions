// https://codeforces.com/contest/1350/problem/A

#include <iostream>

#define MAXN 1000001

using namespace std;

int main() {
	int t, n, k, f[MAXN] = {0};
	for (int i = 2; i < MAXN; i++) {
		if (!f[i]) {
			for (int j = i; j < MAXN; j += i) {
				if (!f[j]) f[j] = i;
			}
		}
	}
	cin >> t;
	while(t--) {
		cin >> n >> k;
		cout << n + f[n] + 2 * (k - 1) << endl;
	}
	return 0;
}
