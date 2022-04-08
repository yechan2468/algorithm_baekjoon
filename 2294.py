import sys


# https://www.acmicpc.net/problem/2294

INF = 100_001
n, k = map(int, sys.stdin.readline().split())
coins = []
memo = [0] + [INF] * 10000
for _ in range(n):
    coin = int(sys.stdin.readline())
    if coin <= k:
        coins.append(coin)

for i in range(1, k+1):
    for coin in coins:
        if i-coin < 0:
            continue
        memo[i] = min(memo[i], memo[i-coin]+1)
        
if memo[k] == INF:
    print(-1)
else:
    print(memo[k])
