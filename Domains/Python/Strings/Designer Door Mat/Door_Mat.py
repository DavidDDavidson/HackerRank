N, M = map(int,raw_input().split())
for i in xrange(1,N,2):
    print "-" * ((M - (3 * i)) / 2) + ".|." * i + "-" * ((M - (3 * i)) / 2)
print "-" * ((M - 7) / 2) + "WELCOME" + "-" * ((M - 7) / 2)
for i in xrange(N-2,-1,-2):
    print "-" * ((M - (3 * i)) / 2) + ".|." * i + "-" * ((M - (3 * i)) / 2)
