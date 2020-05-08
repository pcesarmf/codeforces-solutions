// https://codeforces.com/contest/1348/problem/B

#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
	int t, n, k, x;
	set<int> s;
	vector<int> v;

	cin >> t;
	while (t--) {
		s.clear();
		v.clear();

		cin >> n >> k;

		for (int i = 0; i < n; i++) {
			cin >> x;
			s.insert(x);
		}
		if ((int) s.size() <= k) {
			for (int e : s) {
				v.push_back(e);
			}
			for (int i = (int) s.size(); i < k; i++) {
				v.push_back(1);
			}
			cout << n * k << endl;
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < k; j++) {
					if (i || j) cout << " ";
					cout << v[j];
				}
			}
			cout << endl;
		} else {
			cout << "-1\n";
		}
	}
}
