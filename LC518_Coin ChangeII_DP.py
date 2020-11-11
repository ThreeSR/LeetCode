# -*- coding: utf-8 -*-
"""
Created on Sat Aug 22 01:59:57 2020

@author: Three
"""

def change(amount, coins):
        dp = [0]*(amount+1)
        dp[0] = 1
        for coin in coins:
            for i in range(coin,amount+1):
                dp[i] = dp[i] + dp[i-coin]
        return dp[amount]
    
amount = int(input())
coins = [int(x) for x in input().split()] 
print(change(amount,coins))