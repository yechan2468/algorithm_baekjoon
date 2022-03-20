import sys


# https://www.acmicpc.net/problem/2110

n, c = map(int, sys.stdin.readline().split())
locations = []
for _ in range(n):
    locations.append(int(sys.stdin.readline()))
locations.sort()

def get_router_count(distance):
    result = 1
    prev = locations[0]
    for i in range(n):
        curr = locations[i]
        if (curr - prev) < distance:
            continue
        else:
            result += 1
            prev = curr
    return result

start = 1
end = locations[-1]
result = 0
while start <= end:
    mid = (start + end) // 2
    if get_router_count(mid) >= c:
        start = mid + 1
        result = mid
    else:
        end = mid - 1
    
print(result)
