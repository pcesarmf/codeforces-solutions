// https://codeforces.com/contest/1355/problem/A

#include <iostream>
#include <utility>

using namespace std;

pair<int, int> minmax_digits(unsigned long long n) {
	int largest = 0, smallest = 9, r;
	while (n) {
		r = n % 10;
		if (r > largest) largest = r;
		if (r < smallest) smallest = r;
		n /= 10;
	}
	return make_pair(smallest, largest);
}

int main() {
	int t;
	unsigned long long a;
	long long k;
	cin >> t;
	while (t--) {
		cin >> a >> k;
		k--;
		while (k--) {
			auto minmax = minmax_digits(a);
			if (minmax.first == 0) break;
			a += minmax.first * minmax.second;
		}
		cout << a << endl;
	}
	return 0;
}
