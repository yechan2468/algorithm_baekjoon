import sys


# https://www.acmicpc.net/problem/11057

n = int(sys.stdin.readline())
MOD = 10007

prev = [1] * 10    # 일의 자리 숫자가 i인 오르막 수의 개수 (0-9)
for i in range(1, n):
    crt = [0] * 10
    for j, num in enumerate(prev):
        for k in range(j, 10):
            crt[k] += num
            crt[k] %= MOD
    prev = crt

print(sum(prev) % MOD)
