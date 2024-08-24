def func(ls):
    return ls[0] <= 20 and ls[1] <= 20 and ls[2] <= 20   
n = int(input())
for i in range(1, n + 1):
    print(f'Case {i}: {"good" if func(list(map(int, input().split()))) else "bad"}')