import bisect
import sys


# https://www.acmicpc.net/problem/10816

n = int(sys.stdin.readline())
cards = list(map(int, sys.stdin.readline().split()))
cards.sort()
_ = int(sys.stdin.readline())
numbers = list(map(int, sys.stdin.readline().split()))

for number in numbers:
    print(bisect.bisect_right(cards, number) - bisect.bisect_left(cards, number), end=' ')
