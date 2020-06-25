// https://codeforces.com/contest/1373/problem/B

#include <iostream>
#include <string>

using namespace std;

string s;
bool res;

void solve() {
	cin >> s;
	res = true;
	bool tmp_found = true;
	while (tmp_found) {
		tmp_found = false;
		for (unsigned i = 1; i < s.size(); i++) {
			if (s[i - 1] != s[i]) {
				s.erase(i - 1, 2);
				tmp_found = true;
				break;
			}
		}
		res = !res;
	}
	cout << (res ? "DA": "NET") << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}
