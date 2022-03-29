import sys


# https://www.acmicpc.net/problem/1764

n, m = map(int, sys.stdin.readline().split())
set_n = set()
set_m = set()
for _ in range(n):
    set_n.add(sys.stdin.readline().rstrip())
for _ in range(m):
    set_m.add(sys.stdin.readline().rstrip())  

set_nm = set_n & set_m
print(len(set_nm))
for name in sorted(list(set_nm)):
    print(name)
