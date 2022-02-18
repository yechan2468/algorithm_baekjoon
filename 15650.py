import itertools
import sys

# https://www.acmicpc.net/problem/15650

n, m = map(int, sys.stdin.readline().split())
for i in itertools.combinations(range(1,n+1), m):
    for j in i:
        print(j, end=" ")
    print()
