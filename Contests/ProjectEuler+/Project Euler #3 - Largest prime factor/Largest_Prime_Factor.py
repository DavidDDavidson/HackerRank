t = int(input())
while t > 0:
    p = 1
    i = 2
    n = int(input())
    while True:
        if i * i > n:
            break
        while n % i == 0:
            p = i
            n /= i
        if n > p:
            p = n
        i = i + 1
    print (int(p))
    t = t - 1
