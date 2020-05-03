# https://codeforces.com/contest/1328/problem/A

for _ in range(int(input())):
	a, b = map(int, input().split())
	mod = a % b
	if mod:
		print(b - mod)
	else:
		print(0)
