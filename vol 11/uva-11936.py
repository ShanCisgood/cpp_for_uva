n = int(input())

while n > 0:
    n -= 1
    arr = list(map(int, input().split()))
    arr.sort()

    if arr[0] + arr[1] > arr[2]:
        print('OK')
    else:
        print('Wrong!!')