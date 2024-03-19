t = int(input())

for _case in range(t):
    ls = list(map(int, input().split()))
    ls.sort()
    print(f'Case {_case + 1}: {ls[1]}')