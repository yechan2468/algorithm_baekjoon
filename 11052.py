import sys


# https://www.acmicpc.net/problem/11052

n = int(sys.stdin.readline())
prices = [0] + list(map(int, sys.stdin.readline().split()))
memo = [0] * (n+1)
memo[1] = prices[1]

for i in range(1, n+1):
    for j in range(i+1):
        memo[i] = max(memo[i], prices[i-j]+memo[j])

print(memo[n])
