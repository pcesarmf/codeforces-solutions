# https://codeforces.com/contest/1343/problem/A

t = int(input())

for _ in range(t):
    n = int(input())
    p = 3
    while True:
        if n % p == 0:
            print(n // p)
            break
        p = p + p + 1
