import sys


# https://www.acmicpc.net/problem/11726

MOD = 10007
n = int(sys.stdin.readline())
memo = [1, 2]

for i in range(2, n):
    memo.append((memo[i-2] + memo[i-1]) % MOD)

print(memo[n-1])
