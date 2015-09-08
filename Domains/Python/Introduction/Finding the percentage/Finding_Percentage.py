n = int(raw_input())
marks = dict()
for i in range(0, n):
    split = raw_input().split()
    marks[split[0]] = split[1:]
print marks[raw_input()]

#Incomplete
