# https://codeforces.com/contest/509/problem/A

n = int(input())

range_n = range(n)
range_1_n = range(1, n)

m = [[0 for _ in range_n] for _ in range_n]

for i in range_n:
	m[0][i] = m[i][0] = 1

for i in range_1_n:
	for j in range_1_n:
		m[i][j] = m[i - 1][j] + m[i][j - 1]

print(m[n - 1][n - 1])
