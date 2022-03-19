import sys


# https://www.acmicpc.net/problem/1931

n = int(sys.stdin.readline())
meetings = []
for _ in range(n):
    start, end = map(int, sys.stdin.readline().split())
    meetings.append([start, end])
result = 1

meetings.sort(key=lambda x:x[0])
meetings.sort(key=lambda x:x[1])

end = meetings[0][1]
for i in range(1,n):
    if end <= meetings[i][0]:
        result += 1
        end = meetings[i][1]

print(result)
