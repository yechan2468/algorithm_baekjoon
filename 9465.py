import sys


# https://www.acmicpc.net/problem/9465

UP = 0
DOWN = 1

testcase = int(sys.stdin.readline())
for _ in range(testcase):
    n = int(sys.stdin.readline())
    arr = [list(map(int, sys.stdin.readline().split())) for _ in range(2)]
    # 마지막으로 선택된 위치 UP일 때 sum, DOWN일 때 sum
    memo = [[-1 for _ in range(n)], [-1 for _ in range(n)]]
    
    if n >= 1:
        memo[UP][0] = arr[UP][0]
        memo[DOWN][0] = arr[DOWN][0]
    if n >= 2:
        memo[UP][1] = arr[DOWN][0] + arr[UP][1]
        memo[DOWN][1] = arr[UP][0] + arr[DOWN][1]
    for i in range(2, n):
        memo[UP][i] = max(memo[UP][i-2], memo[DOWN][i-2], memo[DOWN][i-1]) + arr[UP][i]
        memo[DOWN][i] = max(memo[UP][i-2], memo[DOWN][i-2], memo[UP][i-1]) + arr[DOWN][i]

    print(max(memo[0][n-1], memo[1][n-1]))
