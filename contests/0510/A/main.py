# https://codeforces.com/contest/510/problem/A

n, m = map(int, input().split())

lines = ["#" * m, "." * (m - 1) + "#", "#" + "." * (m - 1)]

for i in range(n):
	if i % 2 == 0:
		print(lines[0])
	elif i % 4 == 1:
		print(lines[1])
	else:
		print(lines[2])
