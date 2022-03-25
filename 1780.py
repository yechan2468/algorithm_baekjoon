import sys


# https://www.acmicpc.net/problem/1780

n = int(sys.stdin.readline())
arr = []
for i in range(n):
    arr.append(list(map(int, sys.stdin.readline().split())))
# result indicates how many (0, 1, -1)s in arr
result = [0, 0, 0]

def divide(arr):
    parts = [[] for _ in range(9)]
    for i in range(9):
        tmp = len(arr) // 3
        for row in range(tmp*(i//3), tmp*(i//3+1)):
            parts[i].append(arr[row][tmp*(i%3):tmp*(i%3+1)])
    return parts

def evaluate(arr):
    cnt = [0, 0, 0]
    for i in range(len(arr)):
        for j in range(len(arr)):
            cnt[arr[i][j]] += 1
    for i in (-1, 0, 1):
        if cnt[i] == len(arr)**2:
            result[i] += 1
            return i
    return None

def divide_and_conquer(arr):
    if evaluate(arr) is not None:
        return
    for part in divide(arr):
        divide_and_conquer(part)

divide_and_conquer(arr)
for i in (-1, 0, 1):
    print(result[i])
