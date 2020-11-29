class Solution:
    def minSwapsCouples(self, row: List[int]) -> int: # 暴力解，异或运算
        result = 0
        for i in range(0, len(row), 2):
            if row[i] == row[i + 1] ^ 1: # 运用异或运算判断是不是一对情侣
                continue
            for j in range(i + 2, len(row), 1): # 如果不是，再进行搜寻
                if row[j] ^ 1 == row[i]: # 搜到了，那么接下来进行座位交换
                    row[i + 1], row[j] = row[j], row[i + 1]
                    result += 1 # 交换次数+1
                    break
        return result # 得到总的交换次数
# reference https://leetcode-cn.com/problems/couples-holding-hands/solution/qing-lu-qian-shou-by-leetcode/

# 那么，为什么可以用异或呢？ 异或运算：相同两个数字，结果为0；不同为1.可以用异或判断两个数字是否相等。此处用处不在此，在于：
# 将数字转为2进制： 1 → 0001 2 → 0010 3 → 0011，Python中，^代表异或（同C++）。所以 0001 ^ 0010 = 0011 = 3
# 反过来，0001 ^ 0011 = 0010 = 2。这就表明，题目中对应的情侣号可以用异或运算实现。（多试几组，显然也是如此）
# 总的来说，可以用上述异或运算做判别，这也是因为题目中对情侣号的限定导致的有趣结果。位运算有时候可以有点睛之笔的作用。