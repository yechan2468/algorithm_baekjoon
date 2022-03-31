import sys


# https://www.acmicpc.net/problem/2667

n = int(sys.stdin.readline())
graph = []
for i in range(n):
    graph.append(list([int(char) for char in sys.stdin.readline().rstrip()]))
visited = [[False for _ in range(n)] for _ in range(n)]
result = []

def dfs(x, y):
    """
    @x: 위에서 아래로 갈수록 증가하는 x 좌표. 0 <= x < n
    @y: 왼쪽에서 오른쪽으로 갈수록 증가하는 y 좌표. 0 <= y < n
    """
    if not (0 <= x < n and 0 <= y < n):
        return
    if not visited[y][x] and graph[y][x]:
        visited[y][x] = True
        dfs(x+1, y)
        dfs(x-1, y)
        dfs(x, y+1)
        dfs(x, y-1)

for i in range(n):
    for j in range(n):
        before = sum(sublist.count(True) for sublist in visited)
        dfs(i, j)
        after = sum(sublist.count(True) for sublist in visited)
        if after - before > 0:
            result.append(after - before)
        
print(len(result))
for elem in sorted(result):
    print(elem)
