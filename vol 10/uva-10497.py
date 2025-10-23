dp = [_ for _ in range(801)]
dp[0] = dp[2] = 1
dp[1] = 0
for i in range(3, 801):
    dp[i] = (i - 1) * (dp[i - 1] + dp[i - 2])

n = int(input())
while n != -1:
    print(dp[n])
    n = int(input())