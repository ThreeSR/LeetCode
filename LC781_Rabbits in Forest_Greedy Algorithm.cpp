class Solution {
public:
    int numRabbits(vector<int> &answers) { // 贪心算法
        unordered_map<int, int> count; // 用一个哈希表记录每个数字出现的次数
        for (int y : answers) { // 记录频次
            count[y]++;
        }
        int ans = 0;
        for (auto &[y, x] : count) { // 这种语法值得学习
        // 有x只兔子都回答y，则至少有 向上取整（x / （y + 1）） 种不同的颜色，且每种颜色有y+1只兔子，因此兔子数至少为 向上取整的数值乘以（y + 1）。
            ans += (x + y) / (y + 1) * (y + 1); // 这是向上取整的意思，需要记住！
        }
        return ans;
    }
};

// reference https://leetcode-cn.com/problems/rabbits-in-forest/solution/sen-lin-zhong-de-tu-zi-by-leetcode-solut-kvla/