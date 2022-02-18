import sys


# https://www.acmicpc.net/problem/9184

dp = [[[-1 for _ in range(23)] for _ in range(23)] for _ in range(23)]

def w(a, b, c):
    if a<=0 or b<=0 or c<=0:
        return 1
    a = min(21, a)
    b = min(21, b)
    c = min(21, c)
    
    if dp[a][b][c] != -1:
        return dp[a][b][c]
    
    result = 0
    if a>20 or b>20 or c>20:
        return w(20, 20, 20)
    elif a<b<c:
        result = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c)
    else:
        result = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1) 
    dp[a][b][c] = result
    return result
        
a = b = c = 1
for i in range(19*3+1):
    dp[a][b][c] = w(a, b, c)
    if i%3 == 0:
        a += 1
    elif i%3 == 1:
        b += 1
    else:
        c += 1

while True:
    a, b, c = map(int, sys.stdin.readline().split())
    if a == b == c == -1:
        break
    print(f"w({a}, {b}, {c}) = {w(a, b, c)}")
