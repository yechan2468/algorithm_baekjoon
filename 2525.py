import sys


# https://www.acmicpc.net/problem/2525

h, m = map(int, sys.stdin.readline().split())
timedelta = int(sys.stdin.readline())

m += timedelta
h += (m // 60)
m %= 60
h %= 24

print(h, m)
