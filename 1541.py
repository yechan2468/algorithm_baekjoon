import sys


# https://www.acmicpc.net/problem/1541

minus = False
num = ''
result = 0

for char in sys.stdin.readline():
    if char.isdigit():
        num += char
    else:
        if minus:
            result -= int(num)
        else:
            result += int(num)
            if char == '-':
                minus = True
        num = ''

print(result)
