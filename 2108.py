import statistics
import sys

# https://www.acmicpc.net/problem/2108

def mode(nums):
    radix = [0] * 8001
    for num in nums:
        radix[num+4000] += 1
    
    first = radix.index(max(radix))
    try:
        second = radix.index(max(radix), first+1)
    except ValueError:
        return first-4000
    else:
        return second-4000

n = int(sys.stdin.readline())
nums = []
for i in range(n):
    nums.append(int(sys.stdin.readline()))

nums.sort()
print(round(statistics.mean(nums)))
print(statistics.median(nums))
print(mode(nums))
print(max(nums)-min(nums))
