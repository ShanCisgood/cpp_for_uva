try:
    while True:
        n, a = map(int, input().split())
        ans = 0
        e = a
        for i in range(1, n + 1):
            ans += i * e
            e *= a
        print(ans)
except EOFError:
    pass