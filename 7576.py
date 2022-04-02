from collections import deque
import sys


# https://www.acmicpc.net/problem/7576

m, n = map(int, sys.stdin.readline().split())
arr = []
for _ in range(n):
    arr.append([int(x) for x in sys.stdin.readline().split()])
visited = [[False for _ in range(m)] for _ in range(n)]
cnt = 0

def bfs():
    global cnt
    queue = deque()
    result = 0
    
    for i in range(n):
        for j in range(m):
            if arr[i][j] == 1:
                queue.append((i, j, 0))
                cnt += 1
            elif arr[i][j] == 0:
                cnt += 1
            else:
                continue
    
    while queue:
        y, x, day = queue.popleft()
        result = max(day-1, result)
        if not (0<=x<m and 0<=y<n):
            continue
        if not visited[y][x]:
            visited[y][x] = True
            if arr[y][x] != -1:
                arr[y][x] = 1
                cnt -= 1
                queue.extend([(y-1, x, day+1),
                            (y+1, x, day+1),
                            (y, x-1, day+1),
                            (y, x+1, day+1),
                             ])
            else:
                continue
    return result

day = bfs()
if cnt != 0:
    print(-1)
else:
    print(day)
