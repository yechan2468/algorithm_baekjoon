from collections import deque
import sys


# https://www.acmicpc.net/problem/10866

n = int(sys.stdin.readline())
dq = deque()
for _ in range(n):
    cmd = sys.stdin.readline().split()
    if cmd[0] == 'push_front':
        dq.append(cmd[1])
    elif cmd[0] == 'push_back':
        dq.appendleft(cmd[1])
    elif cmd[0] == 'pop_front':
        if len(dq) == 0:
            print(-1)
            continue
        print(dq.pop())
    elif cmd[0] == 'pop_back':
        if len(dq) == 0:
            print(-1)
            continue
        print(dq.popleft())
    elif cmd[0] == 'size':
        print(len(dq))
    elif cmd[0] == 'empty':
        print(1 if len(dq) == 0 else 0)
    elif cmd[0] == 'front':
        if len(dq) == 0:
            print(-1)
            continue
        print(dq[-1])
    else:
        if len(dq) == 0:
            print(-1)
            continue
        print(dq[0])
