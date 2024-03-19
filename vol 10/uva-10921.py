table = ['','', 'ABC', 'DEF', 'GHI', 'JKL', 'MNO', 'PQRS', 'TUV', 'WXYZ']

while True:
    try:
        str = input()
        for c in str:
            isTrue = False
            for i in range(2, 10, 1):
                if c in table[i]:
                    print(i, end = '')
                    isTrue = True
                    break
            if isTrue == False:
                print(c, end = '')
        print()

    except EOFError:
        break