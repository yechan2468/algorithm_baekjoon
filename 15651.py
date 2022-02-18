import itertools
import sys


# https://www.acmicpc.net/problem/15651

n, m = map(int, sys.stdin.readline().split())
for i in itertools.product(range(1,n+1), repeat=m):
    for j in i:
        print(j, end=" ")
    print()
