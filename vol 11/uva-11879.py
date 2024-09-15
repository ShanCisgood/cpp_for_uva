while True:
    n = int(input())
    if n == 0:
        break
    print(1 if n % 17 == 0 else 0)