import sys


# https://www.acmicpc.net/problem/2480

a, b, c = map(int, sys.stdin.readline().split())

def solve(a, b, c):
    if a == b == c:
        return 10000 + a * 1000
    elif a == b:
        return 1000 + a * 100
    elif b == c:
        return 1000 + b * 100
    elif c == a:
        return 1000 + c * 100
    else:
        return max(a, b, c) * 100

print(solve(a, b, c))
