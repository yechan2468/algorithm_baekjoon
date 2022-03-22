import sys


# https://www.acmicpc.net/problem/2630

n = int(sys.stdin.readline())
arr = [[] for _ in range(n)]
for i in range(n):
    arr[i] = list(map(int, sys.stdin.readline().split()))
result = [0, 0]

def divide(arr):
    part1 = []
    part2 = []
    part3 = []
    part4 = []
    mid = len(arr) // 2
    for i in range(mid):
        part1.append(arr[i][:mid])
        part2.append(arr[i][mid:])
        part3.append(arr[mid+i][:mid])
        part4.append(arr[mid+i][mid:])
    return part1, part2, part3, part4

def evaluate(arr):
    isAllFalse = True
    isAllTrue = True
    for i in range(len(arr)):
        for j in range(len(arr)):
            if arr[i][j]:
                isAllFalse = False
            else:
                isAllTrue = False
    if isAllFalse:
        result[0] += 1
        return True
    elif isAllTrue:
        result[1] += 1
        return True
    else:
        return False

def divide_and_conquer(arr):
    if evaluate(arr):
        return
    for part in divide(arr):
        divide_and_conquer(part)

divide_and_conquer(arr)

print(result[0], result[1], sep='\n')
