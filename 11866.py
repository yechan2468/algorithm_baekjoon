import sys


# https://www.acmicpc.net/problem/11866

n, k = map(int, sys.stdin.readline().split())
arr = [i for i in range(1, n+1)]

i = 0
print('<', end='')
while len(arr) > 0:
    i += k-1
    i %= len(arr)
    print(arr[i], end=', ' if len(arr) != 1 else '>')
    del arr[i]
