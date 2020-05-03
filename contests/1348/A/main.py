# https://codeforces.com/contest/1348/problem/A

for _ in range(int(input())):
	n = int(input())
	print(2 ** (n // 2 + 1) - 2)
