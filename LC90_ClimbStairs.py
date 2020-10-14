def ClimbStairs(stairs):
    num = [0]*(stairs+1)
    num[0] = 0
    num[1] = 1
    num[2] = 2
    for i in range(3,stairs+2):
        num[i] = num[i-1] + num[i-2]
    return num[stairs]


stairs = int(input())
print(ClimbStairs(stairs))
