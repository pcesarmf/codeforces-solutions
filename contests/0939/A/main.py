# https://codeforces.com/contest/939/problem/A

n = int(input())
f = list(map(lambda x: int(x) - 1, input().split()))

love_triangle = False

for i in range(n):
	if i == f[f[f[i]]]:
		love_triangle = True
		break

print("YES" if love_triangle else "NO")
