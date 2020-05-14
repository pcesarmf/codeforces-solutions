// https://codeforces.com/contest/1353/problem/D

#include <iostream>
#include <vector>
#include <queue>
#include <utility>

#define MAXN 200000

using namespace std;

struct compare {
	bool operator()(const pair<int, int>& a, const pair<int, int>& b){
		int da = a.second - a.first;
		int db = b.second - b.first;
		if (da != db) return da < db;
		return a.first > b.first;
	}
};

int main() {
	int t, n, d, x, l, r;
	int a[MAXN];
	priority_queue<pair<int, int>, vector<pair<int, int>>, compare> ranges;

	cin >> t;
	while (t--) {
		cin >> n;
		while (!ranges.empty()) ranges.pop();
		ranges.push(make_pair(0, n - 1));
		for (int i = 1; i <= n; i++) {
			auto range = ranges.top();
			l = range.first, r = range.second;
			d = r - l;
			x = l + (d >> 1);
			a[x] = i;
			ranges.pop();
			ranges.push(make_pair(l, x - 1));
			ranges.push(make_pair(x + 1, r));
		}
		for (int i = 0; i < n; i++) {
			cout << a[i] << ' ';
		}
		cout << endl;
	}
	return 0;
}
