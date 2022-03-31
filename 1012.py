import sys


# https://www.acmicpc.net/problem/1012

cnt = 0
sys.setrecursionlimit(5000)

def dfs(x, y, coordinates, visited):
    global cnt
    if not (0<=x<m and 0<=y<n):
        return
    if not visited[y][x] and (x, y) in coordinates:
        visited[y][x] = True
        cnt += 1
        dfs(x+1, y, coordinates, visited)
        dfs(x, y+1, coordinates, visited)
        dfs(x-1, y, coordinates, visited)
        dfs(x, y-1, coordinates, visited)

testcases = int(sys.stdin.readline())
for _ in range(testcases):
    # 가로 길이, 세로 길이, 배추가 심어져 있는 위치의 개수
    m, n, k = map(int, sys.stdin.readline().split())
    coordinates = []
    visited = [[False for _ in range(m)] for _ in range(n)]
    result = 0
    
    for _ in range(k):
        x, y = map(int, sys.stdin.readline().split())
        coordinates.append((x, y))
    
    for x, y in coordinates:
        before = cnt
        dfs(x, y, coordinates, visited)
        if cnt - before > 0:
            result += 1

    print(result)
