class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) { // 贪心算法 贪心在于放尽可能多的花，比较花的数量和n的大小。
        int flowers = 0;
        if (flowerbed.size() == 0) return 0;
        for (int i = 0; i < flowerbed.size(); i += 2) { // 两个格子进行跳跃  这是因为一个格子确定有花之后，下一个一定是0。这样一来，下一朵花需要在离
        // 当前花儿2个单位的距离下才可以栽种。
            if (flowerbed[i] == 0) { // 如果当前位置没有花
                if (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0) { // 判断，如果是最后一个格子了，那么就种一朵花，这个时候后面没有格子了；或者下一个是没有花的，可以种一朵
                // 不用判断前面的格子，这是因为之前移动单位是2，前面的格子已经检查过了，确认是没有花的。
                    flowers++;
                }
                else i++; // 如果这个格子的下一个位置有花，那么这个格子不能种花。这个时候位置i转移到下一个格子，准备i += 2，直接在有花的位置跳两格，查看下一个位置。
            }
        }
        return flowers >= n;  // 比较最多能种的花数量和n的大小，如果n更小，显然可以种下。
    }
};

// reference https://leetcode-cn.com/problems/can-place-flowers/solution/qi-si-miao-jie-by-heroding-h7m0/