import sys


# https://www.acmicpc.net/problem/9095

memo = [1, 2, 4]
for i in range(3, 10):
    memo.append(memo[i-3] + memo[i-2] + memo[i-1])

testcase = int(sys.stdin.readline())
for _ in range(testcase):
    n = int(sys.stdin.readline())
    print(memo[n-1])
