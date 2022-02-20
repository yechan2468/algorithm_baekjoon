import sys


# https://www.acmicpc.net/problem/2579

INF = 3000001
num = int(sys.stdin.readline())

# tuple([연속 1계단, 연속 2계단을 올랐을 때 최대 점수])
# memo list의 처음 1개와 마지막 2개 element는
# 구현의 편의를 위해 (0,0)으로 초기화
memo = [(0,0)] * (num+3)
memo[1] = tuple([int(sys.stdin.readline()), -INF])

for i in range(2, num+1):
    currScore = int(sys.stdin.readline())
    memo[i] = tuple([
        max(memo[i-2][0], memo[i-2][1]) + currScore,
        memo[i-1][0] + currScore
    ])

print(max(memo[num]))
