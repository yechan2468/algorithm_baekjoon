import sys


# https://www.acmicpc.net/problem/11048

def get_input():
    n, m = map(int, sys.stdin.readline().split())
    arr = []
    for _ in range(n):
        arr.append(list(map(int, sys.stdin.readline().split())))
    return n, m, arr
        
def init_memo(n, m, arr):
    result = [[0 for _ in range(m)] for _ in range(n)]
    sum_ = 0
    for i in range(m):
        sum_ += arr[0][i]
        result[0][i] = sum_
    sum_ = 0
    for i in range(n):
        sum_ += arr[i][0]
        result[i][0] = sum_
    return result

n, m, arr = get_input()
memo = init_memo(n, m, arr)

for i in range(1, n):
    for j in range(1, m):
        memo[i][j] = max(memo[i-1][j], memo[i][j-1], memo[i-1][j-1]) + arr[i][j]

result = memo[n-1][m-1]
print(result)
