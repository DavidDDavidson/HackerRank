T = int(raw_input())
for i in range(T):
    N = int(raw_input())
    a, b, s = 1, 2, 0   # a = f(1), b = f(2) = f(0) + f(1)
    while b <= N:       # continue summing until the leading fibonacci number in the propogation exceeds N
        if b % 2 == 0:  # if the leading fibonacci number in the propogation is even
            s = s + b   # add the term to the sum
        a, b = b, a + b # propogate the fibonacci numbers
    print s
