from collections import deque
import sys


# https://www.acmicpc.net/problem/7569

m, n, h = map(int, sys.stdin.readline().split())
arr = []
for _ in range(h):
    floor = []
    for _ in range(n):
        floor.append([int(x) for x in sys.stdin.readline().split()])
    arr.append(floor)
visited = [[[False for _ in range(m)] for _ in range(n)] for _ in range(h)]
cnt = 0

def bfs():
    global cnt
    queue = deque()
    result = 0
    
    for i in range(h):
        for j in range(n):
            for k in range(m):
                if arr[i][j][k] == 1:
                    queue.append((i, j, k, 0))
                    cnt += 1
                elif arr[i][j][k] == 0:
                    cnt += 1
                else:
                    continue
    
    while queue:
        z, y, x, day = queue.popleft()
        result = max(day-1, result)
        if not (0<=x<m and 0<=y<n and 0<=z<h):
            continue
        if not visited[z][y][x]:
            visited[z][y][x] = True
            if arr[z][y][x] != -1:
                arr[z][y][x] = 1
                cnt -= 1
                queue.extend([(z-1, y, x, day+1),
                            (z+1, y, x, day+1),
                            (z, y-1, x, day+1),
                            (z, y+1, x, day+1),
                            (z, y, x-1, day+1),
                            (z, y, x+1, day+1),
                             ])
            else:
                continue
    return result

day = bfs()
if cnt != 0:
    print(-1)
else:
    print(day)
