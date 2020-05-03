# https://codeforces.com/contest/1341/problem/A

t = int(input())

for _ in range(t):
    n, a, b, c, d = map(int, input().split())
    if (a - b) * n <= c + d and (a + b) * n >= c - d:
        print("Yes")
    else:
        print("No")
