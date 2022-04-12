import sys


# https://www.acmicpc.net/problem/1074

n, row, col = map(int, sys.stdin.readline().split())
result = 0

while n:
    quarter = pow(2, 2*n-2)
    if row < pow(2, n-1):
        if col < pow(2, n-1):
            result += quarter * 0
        else:
            result += quarter * 1
            col -= pow(2, n-1)
    else:
        if col < pow(2, n-1):
            result += quarter * 2
        else:
            result += quarter * 3
            col -= pow(2, n-1)
        row -= pow(2, n-1)
    n -= 1

print(result)
