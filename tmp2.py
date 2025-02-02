def func(ls):
    return ls[0] <= 20 and ls[1] <= 20 and ls[2] <= 20 
for i in range(1, int(input()) + 1):
    print(f'Case {i}: {"good" if func(list(map(int, input().split()))) else "bad"}')