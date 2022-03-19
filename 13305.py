import sys


# https://www.acmicpc.net/problem/13305

n = int(sys.stdin.readline())
distance = list(map(int, sys.stdin.readline().split()))
price = list(map(int, sys.stdin.readline().split()))
result = 0

min_price = 1_000_000_001
for x in range(n-1):
    if price[x] < min_price:
        min_price = price[x]
    result += min_price * distance[x]

print(result)
