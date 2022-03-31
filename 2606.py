import sys


# https://www.acmicpc.net/problem/2606

v = int(sys.stdin.readline()) # number of vertices
e = int(sys.stdin.readline()) # number of edges
edges = []
for _ in range(e):
    start, end = map(int, sys.stdin.readline().split())
    edges.extend([(start, end), (end, start)])
visited = [False] * (v+1)
result = 0

def dfs(start=1):
    global result
    visited[start] = True
    for _, edge in filter(lambda x: x[0]==start, edges):
        if not visited[edge]:
            result += 1
            dfs(edge)

dfs()
print(result)
