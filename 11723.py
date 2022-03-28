import sys


# https://www.acmicpc.net/problem/11723

n = int(sys.stdin.readline())
s = 0b0

for _ in range(n):
    cmd = sys.stdin.readline().split()
    if len(cmd) == 2:
        mask = (0b1 << int(cmd[1])-1)
    
    if cmd[0] == 'add':
        s |= mask
    elif cmd[0] == 'remove':
        if s & mask:
            s &= (~mask)
    elif cmd[0] == 'check':
        print(1 if (s & mask) else 0)
    elif cmd[0] == 'toggle':
        s ^= mask
    elif cmd[0] == 'all':
        s = 0b11111111111111111111
    else:
        s = 0b0
