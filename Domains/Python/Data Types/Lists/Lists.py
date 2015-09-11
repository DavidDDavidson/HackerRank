N = int(raw_input())
l = list()
for i in range(0, N):
    line = raw_input().split()
    if line[0] == "append":
        l.append(int(line[1]))
    elif line [0] == "insert":
        l.insert(int(line[1]), int(line[2]))
    elif line [0] == "remove":
        l.remove(int(line[1]))
    elif line [0] == "pop":
        l.pop()
    elif line [0] == "print":
        print l
    elif line [0] == "sort":
        l.sort()
    elif line [0] == "reverse":
        l.reverse()
