import sys


# https://www.acmicpc.net/problem/2156


INF = 10_000_001
num = int(sys.stdin.readline())
wine = [0] * (num+2)
for i in range(1, num+1):
    wine[i] = int(sys.stdin.readline())

memo = [0] * (num+2)
memo[1] = wine[1]
memo[2] = wine[1] + wine[2]    

for i in range(3, num+1):
    memo[i] = max(memo[i-3] + wine[i-1] + wine[i], # ●○●●
                  memo[i-2] + wine[i],             # ○●○●
                  memo[i-1]                        # ○○●○
    )

print(memo[i])
