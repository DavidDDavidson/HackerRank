string = raw_input()
find = raw_input()
times_found = 0
for i in range(0, len(string) - len(find) + 1):
    if(string[i:i + len(find)] == find):
        times_found = times_found + 1
print times_found
