# https://codeforces.com/contest/1335/problem/C

t = int(input())

for _ in range(t):
	n = int(input())
	a = map(lambda x: int(x) - 1, input().split())
	l = [0] * n
	r = 0
	d = -1
	for __, v in enumerate(a):
		if l[v] == 0: d += 1
		l[v] += 1
		if l[v] > r: r = l[v]
	if r > d + 1: d += 1
	print(min(r, d))
