class Solution:
    def spiralMatrixIII(self, R: int, C: int, r0: int, c0: int) -> List[List[int]]: # 模拟法
        # 虽然本题的顺时针旋转会出边界，但是运动的方式是熟悉的，可以从中找到规律进行求解。
        # 比如：检查我们在每个方向的行走长度，我们发现如下模式：1，1，2，2，3，3，4，4，... 
        # 即我们先向东走 1 单位，然后向南走 1 单位，再向西走 2 单位，再向北走 2 单位，再向东走 3 单位，等等。
        # 因为我们的行走方式是自相似的，所以这种模式会以我们期望的方式重复。
        # 依据上面的规律，可以写出下面的代码。
        ans = [(r0, c0)] # 结果初始化
        if R * C == 1: return ans # 特判

        # 步长 k = 1, 3, 5 ...
        for k in range(1, 2*max(R, C), 2):

            # For direction (dr, dc) = east, south, west, north;
            # and walk length dk...
            for dr, dc, dk in ((0, 1, k), (1, 0, k), (0, -1, k+1), (-1, 0, k+1)): # 行走的方向。这种东西南北移动的写法很经常遇到
            # 此外，值得注意的是：后面的k在不同方向的时候不同，比如向东和向南都是奇数步长，向西和向北都是偶数步长，所以有的是k，有的是k+1
                # For each of dk units in the current direction ...
                for _ in range(dk): # 在确定方向之后，需要一步步到达指定位置。如果直接走k步到达，会错失中间的结果。
                    # Step in that direction
                    r0 += dr
                    c0 += dc

                    # If on the grid ...
                    if 0 <= r0 < R and 0 <= c0 < C:
                        ans.append((r0, c0)) # 加入结果
                        if len(ans) == R * C: # 判定是否结束
                            return ans
# reference https://leetcode-cn.com/problems/spiral-matrix-iii/solution/luo-xuan-ju-zhen-iii-by-leetcode/