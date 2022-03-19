import sys


# https://www.acmicpc.net/problem/1654

INF = 1_000_001
k, n = map(int, sys.stdin.readline().split())
wires = []
for _ in range(k):
    wires.append(int(sys.stdin.readline()))

start = 1
end = max(wires)
result = 0
while start <= end:
    mid = (start + end) // 2
    tmp = 0
    for wire in wires:
        tmp += (wire // mid)
    if tmp >= n:
        start = mid + 1
        result = mid
    else:
        end = mid - 1

print(result)
