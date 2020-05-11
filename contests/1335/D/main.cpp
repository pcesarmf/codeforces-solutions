// https://codeforces.com/contest/1335/problem/D

#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	string s;

	cin >> t;
	t *= 9;
	while (t--) {
		cin >> s;
		for (char& c : s) {
			if (c == '1') c = '2';
		}
		cout << s << endl;
	}

	return 0;
}
