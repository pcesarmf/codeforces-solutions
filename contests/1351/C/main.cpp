// https://codeforces.com/contest/1351/problem/C

#include <iostream>
#include <string>
#include <set>
#include <utility>

using namespace std;

int main() {
	int t, x, y, time;
	string str;
	set<pair<pair<int, int>, pair<int, int>>> segments;
	pair<pair<int, int>, pair<int, int>> pr;
	pair<int, int> oldPos, newPos;

	cin >> t;
	while (t--) {
		cin >> str;
		newPos = make_pair(0, 0);
		time = 0;
		segments.clear();
		for (char c : str) {
			oldPos = newPos;
			switch (c) {
				case 'N': newPos.second++; break;
				case 'S': newPos.second--; break;
				case 'W': newPos.first--; break;
				case 'E': newPos.first++; break;
			}
			pr = make_pair(oldPos, newPos);
			if (segments.count(pr)) {
				time += 1;
			} else {
				segments.insert(pr);
				segments.insert(make_pair(newPos, oldPos));
				time += 5;
			}
		}
		cout << time << endl;
	}
	return 0;
}
