import sys


# https://www.acmicpc.net/problem/1912

n = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))
memo = [arr[0]]

for i in range(1, n):
    memo.append(max(arr[i], memo[i-1]+arr[i]))

print(max(memo))
