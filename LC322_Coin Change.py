def CoinChange(amount,coins):
    dp = [float("inf")]*(amount+1)
    dp[0] = 0
    for i in range(amount+1):
        for j in range(len(coins)):
            dp[i] = min(dp[i],dp[i-coins[j]]+1)
    return dp[amount] if dp[amount] <= amount else -1


amount = int(input())
coins = [int(x) for x in input().split()]

print(CoinChange(amount,coins))