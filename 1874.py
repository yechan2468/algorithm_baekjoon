import sys


# https://www.acmicpc.net/problem/1874

n = int(sys.stdin.readline())
stack = [0]
goal = []
for _ in range(n):
    goal.append(int(sys.stdin.readline()))
result = []

next_int = 1
goal_idx = 0
while next_int <= n+1 and goal_idx < n:
    if stack[-1] == goal[goal_idx]:
        stack.pop()
        result.append('-')
        goal_idx += 1
    else:
        stack.append(next_int)
        result.append('+')
        next_int += 1

if goal_idx != n:
    print('NO')
else:
    for elem in result:
        print(elem)
