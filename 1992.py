import sys


# https://www.acmicpc.net/problem/1992

n = int(sys.stdin.readline())
arr = [[] for _ in range(n)]
for i in range(n):
    for char in sys.stdin.readline().rstrip():
        arr[i].append(int(char))
result = ''

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
        return 1
    elif isAllTrue:
        return 2
    else:
        return 0

def divide_and_conquer(arr):
    global result
    val = evaluate(arr)
    if val:
        result += f'{val-1}'
        return
    result += '('
    for part in divide(arr):
        divide_and_conquer(part)
    result += ')'

divide_and_conquer(arr)
print(result)
