num_plants = int(raw_input()) #Why is this even included in the input if its totally useless???
heights = set(map(int, raw_input().split()))
num_plants = len(heights) / 1.0
print sum(heights) / num_plants
