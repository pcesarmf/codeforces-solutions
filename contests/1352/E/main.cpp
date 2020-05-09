// https://codeforces.com/contest/1352/problem/E

#include <iostream>
#include <map>

using namespace std;

int main() {
	int t, n, i, j, totalSum, sum, specials;
	int a[8000];
	map<int, int> m;
	map<int, int>::iterator it;

	cin >> t;
	while (t--) {
		cin >> n;
		m.clear();
		for (i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] == 1) continue;
			if (m.count(a[i])) m[a[i]]++;
			else m[a[i]] =  1;
		}
		totalSum = specials = 0;
		for (i = 0; i < n; i++) {
			totalSum += a[i];
			sum = totalSum;
			for(j = 0; j < i ; j++) {
				if (sum <= n) {
					it = m.find(sum);
					if (it != m.end()) {
						specials += it->second;
						m.erase(it);
					}
				}
				sum -= a[j];
			}
		}
		cout << specials << endl;
	}
	return 0;
}
