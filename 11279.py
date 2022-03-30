import heapq
import sys


# https://www.acmicpc.net/problem/11279

n = int(sys.stdin.readline())
arr = []

for _ in range(n):
    num = int(sys.stdin.readline())
    if num == 0:
        if len(arr) == 0:
            print(0)
        else:
            print(-heapq.heappop(arr))
        continue
    heapq.heappush(arr, -num)
