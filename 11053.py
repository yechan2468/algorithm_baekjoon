import sys


# https://www.acmicpc.net/problem/11053
# LIS (Longest Increasing Subsequence) problem

size = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))
memo = [1] * size

for i in range(size):
    for j in range(i):
        if arr[j] < arr[i]:
            memo[i] = max(memo[j]+1, memo[i])
    
print(max(memo))
