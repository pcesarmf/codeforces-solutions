# https://codeforces.com/contest/1327/problem/B

for _ in range(int(input())):
	range_n = range(1, int(input()) + 1)
	available_women = set()
	available_men = set()
	for i in range_n:
		available_women.add(i)
		available_men.add(i)
	for woman in range_n:
		wanted_men = input().split()[1:]
		for man in wanted_men:
			man = int(man)
			if man in available_men:
				available_women.remove(woman)
				available_men.remove(man)
				break
	if not available_women:
		print("OPTIMAL")
	else:
		print("IMPROVE")
		print(f"{next(iter(available_women))} {next(iter(available_men))}")
