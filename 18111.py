import sys


# https://www.acmicpc.net/problem/18111

n, m, block = map(int, sys.stdin.readline().split())
arr = []
for _ in range(n):
    arr += list(map(int, sys.stdin.readline().split()))
result = [128_000_001, 257]

max_h = (sum(arr)+block) // (n*m)
for h in range(max_h, -1, -1):
    time = sum((h-z if h>z else 2*(z-h)) for z in arr)
    if time < result[0]:
        result[0] = time
        result[1] = h

print(result[0], result[1], sep=' ')
