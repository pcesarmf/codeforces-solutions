// https://codeforces.com/contest/1339/problem/B

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main() {
	int t, n, m, i, j;
	vector<int> v;
	stack<int> s;

	cin >> t;
	while (t--) {
		cin >> n;
		v.resize(n);
		m = n >> 1;
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		i = 0;
		j = n - 1;
		while (i < m) {
			s.push(v[i]);
			s.push(v[j]);
			i++;
			j--;
		}
		if (n % 2) s.push(v[m]);
		while (!s.empty()) {
			cout << s.top() << " ";
			s.pop();
		}
		cout << endl;
	}
	return 0;
}
