from collections import deque
import copy
import sys


# https://www.acmicpc.net/problem/1260

n, m, v = map(int, sys.stdin.readline().split())
graph = []
for _ in range(m):
    start, end = map(int, sys.stdin.readline().split())
    graph.append((start, end))
    graph.append((end, start))
graph.sort(key=lambda x: x[1])
graph.sort(key=lambda x: x[0])
visited = [False] * (n+1)

def dfs(start, visited):
    visited[start] = True
    print(start, end=' ')
    for _, edge in filter(lambda x: x[0]==start, graph):
        if not visited[edge]:
            dfs(edge, visited)

def bfs(start, visited):
    visited[start] = True
    queue = deque([start])
    while queue:
        start = queue.popleft()
        print(start, end=' ')
        for _, edge in filter(lambda x: x[0]==start, graph):
            if not visited[edge]:
                queue.append(edge)
                visited[edge] = True

dfs(v, copy.deepcopy(visited))
print()
bfs(v, visited)
