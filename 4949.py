import sys


# https://www.acmicpc.net/problem/4949

def is_balanced(line):
    stack = []
    for char in line:
        if char == '(' or char == '[':
            stack.append(char)
        elif char == ')':
            if len(stack) == 0:
                return False
            elem = stack.pop()
            if elem != '(':
                return False
        elif char == ']':
            if len(stack) == 0:
                return False
            elem = stack.pop()
            if elem != '[':
                return False
        else:
            pass
    
    if len(stack) != 0:
        return False
    
    return True

while True:
    line = sys.stdin.readline().rstrip()
    if line == '.':
        break
    print('yes' if is_balanced(line) else 'no')
