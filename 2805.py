import sys


# https://www.acmicpc.net/problem/2805

n, m = map(int, sys.stdin.readline().split())
lengths = list(map(int, sys.stdin.readline().split()))

start = 0
end = max(lengths)
result = 0
while start <= end:
    mid = (start + end) // 2
    val = sum(map(lambda x: max(x-mid, 0), lengths))
    if val >= m:
        start = mid + 1
        result = mid
    else:
        end = mid - 1

print(result)
