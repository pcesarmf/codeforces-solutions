// https://codeforces.com/contest/1341/problem/B

#include <iostream>

#define MAXN 200001

using namespace std;

int main() {
	int t, n, k;
	int first, second, third, maxPos, maxValue, sum;
	bool peaks[MAXN];

	cin >> t;
	while (t--) {
		cin >> n >> k;
		peaks[0] = peaks[1] = peaks[n] = false;
		cin >> first >> second;
		for (int i = 2; i < n; i++) {
			cin >> third;
			if (second > first && second > third) peaks[i] = true;
			else peaks[i] = false;
			first = second;
			second = third;
		}
		sum = 1;
		for (int i = 2; i <= k - 2; i++) {
			if (peaks[i]) sum++;
		}
		maxPos = 1;
		maxValue = 0;
		for (int i = 1; i <= n - k + 1; i++) {
			if (peaks[i + k - 2]) sum++;
			if (peaks[i]) sum--;
			if (sum > maxValue) {
				maxValue = sum;
				maxPos = i;
			}
		}
		cout << maxValue << " " << maxPos << endl;
	}
	return 0;
}
