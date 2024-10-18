ls = []
try:
    while True:
        n = int(input())
        ls.append(n)
        ls.sort()
        if len(ls) % 2 == 1:
            print(ls[len(ls) // 2])
        else:
            print((ls[len(ls) // 2] + ls[len(ls) // 2 - 1]) // 2)

except EOFError:
    pass