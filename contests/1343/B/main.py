# https://codeforces.com/contest/1343/problem/B

t = int(input())

for _ in range(t):
    n = int(input())
    m = n // 2
    if m % 2:
        print("NO")
    else:
        print("YES")
        arr = list(range(n))
        for i in range(m):
            arr[i] = i + i + 2
        p = m + m // 2
        for i in range(m, p):
            arr[i] = (i - m) * 2 + 1
        for i in range(p, n):
            arr[i] = (i - m) * 2 + 3
        print(" ".join(map(str, arr)))
