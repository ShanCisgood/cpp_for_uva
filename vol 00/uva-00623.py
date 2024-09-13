from math import factorial
try:
    while True:
        n = int(input())
        print(f'{n}!\n{factorial(n)}')
except EOFError:
    pass