import operator
import sys


# https://www.acmicpc.net/problem/1003

n = int(sys.stdin.readline())
testcases = []
for _ in range(n):
    testcases.append(int(sys.stdin.readline()))

dp = [(-1, -1) for _ in range(max(testcases)+1)]
dp[0] = (1, 0)
dp[1] = (0, 1)
for i in range(2, max(testcases)+1):
    dp[i] = tuple(map(operator.add, dp[i-1], dp[i-2]))
    
for testcase in testcases:
    result = dp[testcase]
    print(result[0], result[1])
