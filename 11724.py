import sys


# https://www.acmicpc.net/problem/11724

sys.setrecursionlimit(3000)
n, m = map(int, sys.stdin.readline().split())
graph = [[] for _ in range(n+1)]
for _ in range(m):
    v1, v2 = map(int, sys.stdin.readline().split())
    graph[v1].append(v2)
    graph[v2].append(v1)
visited = [True] + [False] * n

def dfs(start):
    visited[start] = True
    for v in graph[start]:
        if not visited[v]:
            dfs(v)

result = 0
for i in range(1, n+1):
    if not visited[i]:
        dfs(i)
        result += 1
        
print(result)
