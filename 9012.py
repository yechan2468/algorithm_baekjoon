import sys


# https://www.acmicpc.net/problem/9012

def isVPS(line):
    """
    VPS = Valid Parenthesis String
    """
    stack = []
    for char in line:
        if char == '(':
            stack.append(0)
        elif char == ')':
            if len(stack) != 0:
                stack.pop()
            else:
                return False
    if len(stack) != 0:
        return False
    else:
        return True

testcase = int(sys.stdin.readline())
for _ in range(testcase):
    line = sys.stdin.readline()
    print('YES' if isVPS(line) else 'NO')
