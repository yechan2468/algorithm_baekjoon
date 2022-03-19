import sys


# https://www.acmicpc.net/problem/10828

n = int(sys.stdin.readline())
stack = []
for _ in range(n):
    cmd = sys.stdin.readline().split()
    if cmd[0] == 'push':
        stack.append(cmd[1])
    elif cmd[0] == 'pop':
        if len(stack) == 0:
            print('-1')
            continue
        print(stack.pop())
    elif cmd[0] == 'size':
        print(len(stack))
    elif cmd[0] == 'empty':
        print(1 if len(stack) == 0 else 0)
    else:
        if len(stack) == 0:
            print('-1')
            continue
        print(stack[-1])
    
