from collections import deque
import sys


# https://www.acmicpc.net/problem/1966

testcase = int(sys.stdin.readline())
for _ in range(testcase):
    n, m = map(int, sys.stdin.readline().split())
    priorities = list(map(int, sys.stdin.readline().split()))
    queue = deque()
    for i in range(n):
        queue.append((priorities[i], i))
    
    cnt = 1
    while True:
        max_priority = 0
        for i in range(len(queue)):
            if queue[i][0] > max_priority:
                max_priority = queue[i][0]
        while queue[0][0] != max_priority:
            queue.append(queue.popleft())
        
        if queue[0][1] == m:
            print(cnt)
            break
        queue.popleft()
        cnt += 1
