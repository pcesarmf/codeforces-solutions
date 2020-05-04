# https://codeforces.com/contest/1343/problem/C

t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    m = a[0]
    s = 0
    for i in range(1, n):
        if (a[i] > 0) == (a[i - 1] > 0):
            if a[i] > m:
                m = a[i]
        else:
            s += m
            m = a[i]
    s += m
    print(s)
