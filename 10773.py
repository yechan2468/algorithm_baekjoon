import sys


# https://www.acmicpc.net/problem/10773

n = int(sys.stdin.readline())
stack = []

for _ in range(n):
    num = int(sys.stdin.readline())
    if num > 0:
        stack.append(num)
    else:
        stack.pop()

print(sum(stack))
