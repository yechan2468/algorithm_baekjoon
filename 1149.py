import sys


# https://www.acmicpc.net/problem/1149

num = int(sys.stdin.readline())
memo = [(0,0,0) for _ in range(1001)]
memo[1] = tuple(map(int, sys.stdin.readline().split()))

for i in range(2, num+1):
    cost = tuple(map(int, sys.stdin.readline().split()))
    prev = memo[i-1]
    memo[i] = (
        min(prev[1], prev[2]) + cost[0],
        min(prev[0], prev[2]) + cost[1],
        min(prev[0], prev[1]) + cost[2]
    )

print(min(memo[num]))
