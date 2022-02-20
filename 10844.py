import sys


# https://www.acmicpc.net/problem/10844

num = int(sys.stdin.readline())
# 끝이 i로 끝나는 계단수의 개수
prev = []
curr = [0] + [1] * 9

for i in range(num-1):
    prev = curr
    curr = [0] * 10
    
    curr[1] += prev[0]
    for i in range(1,9):
        curr[i-1] += prev[i]
        curr[i+1] += prev[i]
    curr[8] += prev[9]
    
    for j in range(10):
        curr[j] %= int(1e9)

print(sum(curr) % int(1e9))
