n = int(input())
a = input().split()

x = a[-1]

for i in range(n - 1, -1, -1):
	if a[i] != x:
		print(i + 1)
		break
