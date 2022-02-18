import sys


# https://www.acmicpc.net/problem/1904

num = int(sys.stdin.readline())
memo = [0] * (int(1e6)+1)
memo[1] = 1
memo[2] = 2

for i in range(3, num+1):
    memo[i] = (memo[i-2] + memo[i-1]) % 15746

print(memo[num])
