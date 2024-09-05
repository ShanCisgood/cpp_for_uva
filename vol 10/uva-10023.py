n = int(input())
for i in range(n):
    s = input()
    m = int(input())
    if i != 0:
        print()
    x, y = 1, m
    while abs(x - y) > 0.001:
        x = (x + y) // 2
        y = m // x
    print(x)