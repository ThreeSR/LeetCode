def longestCommonSubsequence(text1, text2, m, n):

    if m==0 or n==0:
        return 0
    elif text1[m-1] == text2[n-1]:
        return 1 + longestCommonSubsequence(text1, text2, m-1, n-1)
    else:
        return max(longestCommonSubsequence(text1, text2, m-1, n),longestCommonSubsequence(text1, text2, m, n-1))
    
m = int(input())
text1 = [int(x) for x in input().split()]
n = int(input())
text2 = [int(x) for x in input().split()]
#text1 = "abcde"
#text2 = "ace"

print(longestCommonSubsequence(text1, text2, len(text1), len(text2)))