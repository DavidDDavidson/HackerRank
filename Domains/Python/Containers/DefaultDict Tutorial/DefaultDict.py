from collections import defaultdict
n_m = raw_input().split()
n = int(n_m[0])
m = int(n_m[1])
d = defaultdict(list)
for i in xrange(n):
    d["A"].append(raw_input())
for i in xrange(m):
    d["B"].append(raw_input())
previous = ""
for i in xrange(m):
    indices = list();
    for j in xrange(n):
        if d["B"][i] == d["A"][j]:
            indices.append(str(j + 1));
    if len(indices) == 0:
        print -1
    else:
        print " ".join(indices)
