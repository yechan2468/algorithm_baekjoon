from collections import deque
import sys


# https://www.acmicpc.net/problem/2178

INF = 100_000
n, m = map(int, sys.stdin.readline().split())
arr = []
for _ in range(n):
    arr.append(list(map(lambda x: bool(int(x)), (char for char in sys.stdin.readline().rstrip()))))
visited = [[INF for _ in range(m)] for _ in range(n)]

def bfs():
    queue = deque([(0, 0, 1)])
    while queue:
        x, y, cnt = queue.popleft()
        
        if not (0<=x<m and 0<=y<n):
            continue
        if x == m-1 and y == n-1:
            print(min(visited[y-1][x], visited[y][x-1])+1)
            break
        
        if (visited[y][x] == INF) and arr[y][x]:
            visited[y][x] = cnt
            queue.extend([
                (x, y-1, visited[y][x]+1),
                (x, y+1, visited[y][x]+1),
                (x-1, y, visited[y][x]+1),
                (x+1, y, visited[y][x]+1),
            ])

bfs()
