size = int(raw_input())
M = set(map(int, sorted(raw_input().split())))
size = int(raw_input())
N = set(map(int, sorted(raw_input().split())))
sym_diff = M.symmetric_difference(N)
lis = list()
while len(sym_diff) > 0:
    lis.append(sym_diff.pop())
lis.sort()
while lis.count > 0:
    print lis.pop
