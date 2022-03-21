from collections import deque
import sys


# https://www.acmicpc.net/problem/18258

n = int(sys.stdin.readline())
queue = deque()

for _ in range(n):
    cmd = sys.stdin.readline().split()
    if cmd[0] == 'push':
        queue.append(cmd[1])
    elif cmd[0] == 'pop':
        if len(queue) == 0:
            print('-1')
            continue
        print(queue.popleft())
    elif cmd[0] == 'size':
        print(len(queue))
    elif cmd[0] == 'empty':
        print(1 if len(queue) == 0 else 0)
    elif cmd[0] == 'front':
        if len(queue) == 0:
            print('-1')
            continue
        print(queue[0])
    else:
        if len(queue) == 0:
            print('-1')
            continue
        print(queue[-1])
        
