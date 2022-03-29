import sys


# https://www.acmicpc.net/problem/17298

INF = 1_000_001
n = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split())) + [INF]
stack = [(INF, -1)]
result = []

# arr를 0부터 n-1까지 순회하면서, stack에 arr의 숫자를 쌓는다.
# 이때, stack에서 위에 쌓인 숫자는 아래 숫자보다 작거나 같도록 쌓는다.
# arr에서 순회하면서 나온 숫자 중 현재 꺼낸 숫자를 num이라고 하자.
# 만약 stack의 맨 위에 쌓여있는 숫자보다 num이 크면,
# num보다 큰 숫자가 stack의 맨 위에 쌓여있을 때까지 pop을 한다.
# 이때, 구하고자 하는 result 리스트에, pop을 한 횟수만큼 num을 append한다.

for i in range(n+1):
    num = arr[i]
    while stack[-1][0] < num:
        idx = stack.pop()[1]
        result.append((num, idx))
    stack.append((num, i))

# 위 방식대로 하면, 숫자의 위치가 result에 정확하게 위치하지 않는 문제가 생긴다.
# 따라서 result에 append할 때 index i 값을 같이 저장시킨 후에,
# index 순서대로 nge 값을 출력한다.

result.sort(key=lambda x: x[1])
for num, _ in result:
    if num == INF:
        num = -1
    print(num, end=' ')
