import itertools
import sys

# https://www.acmicpc.net/problem/15649

n, m = map(int, sys.stdin.readline().split())
for i in itertools.permutations(range(1,n+1), m):
    for j in i:
        print(j, end=" ")
    print()
