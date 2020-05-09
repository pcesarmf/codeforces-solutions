// https://codeforces.com/contest/1352/problem/A

#include <iostream>
#include <string>

using namespace std;

int main() {
	int t, len, k;
	string n, s;
	cin >> t;
	while (t--) {
		cin >> n;
		s = "";
		k = 0;
		len = (int) n.size();
		for (int i = 0; i < len; i++) {
			if (n[i] != '0') {
				k++;
				s.push_back(n[i]);
				for (int j = 0; j < len - i - 1; j++)
					s.push_back('0');
				s.push_back(' ');
			}
		}
		cout << k << endl << s << endl;
	}
	return 0;
}
