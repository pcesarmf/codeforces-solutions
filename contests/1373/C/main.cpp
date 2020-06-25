// https://codeforces.com/contest/1373/problem/C

#include <iostream>
#include <string>

using namespace std;

const unsigned maxn = 1e6;

string s;
int n;
int a[maxn];
long long res;

void solve() {
	cin >> s;
	int n = s.size();
	for (int i = 0; i < n; i++) {
		a[i] = 0;
	}
	int cur = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '+') cur++;
		else cur--;
		if (cur < 0 && a[-cur - 1] == 0) {
			a[-cur - 1] = i + 1;
		}
	}
	res = 0;
	for (int i = 0; i < n; i++) {
		res += a[i] + 1;
	}
	cout << res << endl;
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
