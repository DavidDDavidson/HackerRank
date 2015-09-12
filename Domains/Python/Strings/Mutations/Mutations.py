string = raw_input()
line = raw_input().split()
i = int(line[0])
c = line[1]
print string[:i] + c + string[i + 1:]
