import heapq
import sys


# https://www.acmicpc.net/problem/11286

n = int(sys.stdin.readline())
arr = []

for _ in range(n):
    num = int(sys.stdin.readline())
    if num == 0:
        if len(arr) == 0:
            print(0)
        else:
            num, sign = heapq.heappop(arr)
            print(num * sign)
        continue
    heapq.heappush(arr, (abs(num), num//abs(num)))
