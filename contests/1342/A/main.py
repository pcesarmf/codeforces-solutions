# https://codeforces.com/contest/1342/problem/A

for _ in range(int(input())):
	x, y = map(int, input().split())
	a, b = map(int, input().split())

	if x > y:
		x, y = y, x

	if a + a < b:
		print((x + y) * a)
	else:
		print(x * b + (y - x) * a)
