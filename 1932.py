import sys


# https://www.acmicpc.net/problem/1932

# 0        0
# 1       0 0
# 2      0 a 0
# 3     0 b c 0
# 4    0 d e f 0
# n       ...

num = int(sys.stdin.readline())
prev = [0, 0]

for line in range(2, num+2):
    curr = [0] + list(map(int, sys.stdin.readline().split())) + [0]
    for i in range(1, line):
        curr[i] += max(prev[i-1], prev[i])
    prev = curr

print(max(curr))
