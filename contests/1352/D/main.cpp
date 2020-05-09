// https://codeforces.com/contest/1352/problem/D

#include <iostream>
#include <list>

using namespace std;

int main() {
	int t, n, x;
	int moveCount, previousMoveSum, currentMoveSum, totalAliceSize, totalBobSize;
	bool aliceRound;
	list<int> a;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> x;
			a.push_back(x);
		}
		moveCount = previousMoveSum = totalAliceSize = totalBobSize = 0;
		aliceRound = true;
		while(!a.empty()) {
			if (aliceRound) {
				currentMoveSum = 0;
				while (currentMoveSum <= previousMoveSum) {
					if (a.empty()) break;
					currentMoveSum += a.front();
					a.pop_front();
				}
				previousMoveSum = currentMoveSum;
				totalAliceSize += currentMoveSum;
			} else {
				currentMoveSum = 0;
				while (currentMoveSum <= previousMoveSum) {
					if (a.empty()) break;
					currentMoveSum += a.back();
					a.pop_back();
				}
				previousMoveSum = currentMoveSum;
				totalBobSize += currentMoveSum;
			}
			aliceRound = !aliceRound;
			moveCount++;
		}
		cout << moveCount << " " << totalAliceSize << " " << totalBobSize << endl;
	}
	return 0;
}
