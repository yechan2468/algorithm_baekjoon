import sys


# https://www.acmicpc.net/problem/11047

n, cost = map(int, sys.stdin.readline().split())
coins = []
for i in range(n):
    coins.append(int(sys.stdin.readline()))
result = 0

for coin in reversed(coins):
    result += (cost // coin)
    cost = cost % coin

print(result)
