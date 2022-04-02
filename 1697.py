from collections import deque
import sys


# https://www.acmicpc.net/problem/1697

n, k = map(int, sys.stdin.readline().split())
visited = [False] * 100_001

def bfs():
    queue = deque([(n, 0)])
    while queue:
        pos, time = queue.popleft()
        if not 0<=pos<=100_000:
            continue
        if pos == k:
            return time
        if not visited[pos]:
            visited[pos] = True
            queue.extend([(pos-1, time+1),
                         (pos+1, time+1),
                         (pos*2, time+1),
                         ])

print(bfs())
