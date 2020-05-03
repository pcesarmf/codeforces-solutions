# https://codeforces.com/contest/1328/problem/C

for _ in range(int(input())):
	n = int(input())
	x = list(input())

	a = list(range(n))
	b = list(range(n))

	diff = False

	for i in range(n):
		if x[i] == "0":
			a[i] = b[i] = "0"
		elif x[i] == "1":
			if diff:
				a[i] = "0"
				b[i] = "1"
			else:
				diff = True
				a[i] = "1"
				b[i] = "0"
		else:
			if diff:
				a[i] = "0"
				b[i] = "2"
			else:
				a[i] = b[i] = "1"

	print("".join(a))
	print("".join(b))
