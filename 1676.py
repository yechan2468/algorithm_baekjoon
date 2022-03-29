import sys


# https://www.acmicpc.net/problem/1676

# 뒤에서부터 0의 숫자를 센다는 것은, 그 숫자를 xEp (x*10^p) 의 꼴로 나타냈을 때 p의 값을 구하는 것과 같다.
# 즉, 각 숫자에 2나 5의 인수가 몇 개씩 있는지 센 뒤 10이 얼마나 만들어지는지 확인하면 된다.
# 2의 인수와 5의 인수의 개수를 비교했을 때 더 적은 것이 이 문제의 정답이다.

n = int(sys.stdin.readline())
factor2 = 0
factor5 = 0

if n == 0 or n == 1:
    print(0)
    exit()

for i in range(2, n+1):
    while i%2 == 0:
        i //= 2
        factor2 += 1
    while i%5 == 0:
        i //= 5
        factor5 += 1

print(min(factor2, factor5))
