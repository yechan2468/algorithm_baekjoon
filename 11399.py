import sys


# https://www.acmicpc.net/problem/11399

n = int(sys.stdin.readline())
time = list(map(int, sys.stdin.readline().split()))
time.sort()

for i in range(1, n):
    time[i] = time[i-1] + time[i]

print(sum(time))
