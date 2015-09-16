def summation_formula(N):
    return ((N * (N + 1)) / 2)

def main():
    T = int(raw_input())
    while t > 0:
        N = int(raw_input())
        print (summation_formula(N / 3) * 3) + (summation_formula(N / 5) * 5) - (summation_formula(N / 15) * 15)
        t--

main()
