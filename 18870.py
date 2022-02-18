import sys

# https://www.acmicpc.net/problem/18870

n = int(sys.stdin.readline())
nums = list(map(int, sys.stdin.readline().split()))

num2id = []
for idx, num in enumerate(sorted(list(set(nums)))):
    num2id.append([num, idx])
num2id = dict(num2id)

for num in nums:
    print(num2id[num], end=" ")
