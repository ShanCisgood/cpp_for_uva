t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    ret = 0
    for _ in range(n):
        area, animal, rank = map(int, input().split())
        # print(area, animal, rank)
        ret += area * rank
    print(ret)