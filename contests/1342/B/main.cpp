// https://codeforces.com/contest/1342/problem/B

#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    char firstChar;
    bool diffChars;
    string s;

    cin >> t;
    while (t--) {
        cin >> s;
        firstChar = s[0];
        diffChars = false;
        for (char c : s) {
            if (c != firstChar) {
                diffChars = true;
                break;
            }
        }
        if (diffChars) {
            for (int i = 1; i < (int) s.size(); i++) {
                if (s[i] == s[i - 1]) {
                    s.insert(i, 1, s[i] == '0' ? '1' : '0');
                    i++;
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}