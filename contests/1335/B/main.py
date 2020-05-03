# https://codeforces.com/contest/1335/problem/B

t = int(input())

for _ in range(t):
	n, a, b = map(int, input().split())
	s = ""
	i = 0
	for _ in range(n):
		if i == b: i = 0
		s += chr(i + 97)
		i += 1
	print(s)
