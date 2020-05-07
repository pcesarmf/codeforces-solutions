// https://codeforces.com/contest/1345/problem/B

#include <iostream>
#include <vector>

#define MAXN 1000000000

using namespace std;

int main() {
	int t, n, i, h, lo, hi, mid;
	vector<int> dp;

	dp.push_back(0);

	for (h = 1; dp[h - 1] <= MAXN; h++) {
		dp.push_back(3 * h - 1 + dp[h - 1]);
	}

	cin >> t;
	while (t--) {
		cin >> n;
		mid = 1;
		for (i = 0; mid; i++) {
			lo = 0;
			hi = 25820;
			while (lo <= hi) {
				mid = (lo + hi) / 2;
				if (dp[mid] <= n && dp[mid + 1] > n) break;
				else if (dp[mid] < n) lo = mid + 1;
				else hi = mid - 1;
			}
			n -= dp[mid];
		}
		cout << i - 1 << endl;
	}
	return 0;
}
