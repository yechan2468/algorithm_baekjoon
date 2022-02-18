import sys


# https://www.acmicpc.net/problem/9461

memo = [0, 1, 1, 1, 2, 2] + [0] * 95
for i in range(5, 101):
    memo[i] = memo[i-5] + memo[i-1]

testcases = int(sys.stdin.readline())
for _ in range(testcases):
    num = int(sys.stdin.readline())
    print(memo[num])
