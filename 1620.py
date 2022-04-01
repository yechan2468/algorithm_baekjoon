import sys


# https://www.acmicpc.net/problem/1620

n, m = map(int, sys.stdin.readline().split())
num2name = dict()
name2num = dict()

for num in range(1, n+1):
    name = sys.stdin.readline().rstrip()
    name2num[name] = num
    num2name[num] = name

for _ in range(m):
    question = sys.stdin.readline().rstrip()
    if question.isdigit():
        print(num2name[int(question)])
    else:
        print(name2num[question])
