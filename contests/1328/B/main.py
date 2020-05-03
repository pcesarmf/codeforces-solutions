# https://codeforces.com/contest/1328/problem/B

arr = [0, 1]

while arr[-1] <= 2_000_000_000:
	arr.append(arr[-1] - arr[-2] + arr[-1] + 1)

for _ in range(int(input())):
	n, k = map(int, input().split())
	s = ["a"] * n

	lo = 0
	hi = len(arr) - 1
	while lo <= hi:
		mid = (lo + hi) // 2
		if arr[mid] < k <= arr[mid + 1]:
			lo = hi + 1
		elif arr[mid] < k:
			lo = mid + 1
		else:
			hi = mid - 1

	s[n - mid - 2] = "b"
	s[n - k + arr[mid]] = "b"
	print("".join(s))
