size = int(raw_input())
M = set(map(int, sorted(raw_input().split()))) # Creating set M
size = int(raw_input())
N = set(map(int, sorted(raw_input().split()))) # Creating set N
sym_diff = M.symmetric_difference(N) # Creating the symmetric differnce
lis = list()
while len(sym_diff) > 0: # Converting back into list
    lis.append(sym_diff.pop())
lis.sort()
for i in range (0, len(lis)): # Printing
    print lis[i]
