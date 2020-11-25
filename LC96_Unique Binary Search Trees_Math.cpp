class Solution {
public:
    int numTrees(int n) { 
        vector<int> result(n + 1, 0); // 用vector定义比用数组定义更好
        result[0] = 1; // 初始化
        result[1] = 1; // 赋初值
        for (int i = 2; i < n + 1; i++){
            for(int j = 1; j < i + 1; j++){
                result[i] += result[j - 1] * result[i - j]; // 卡特兰数求值 本问题可以理解成卡特兰数的应用，具体见参考链接
            }
        }
        return result[n];
    }
};

// reference https://leetcode-cn.com/problems/unique-binary-search-trees/solution/bu-tong-de-er-cha-sou-suo-shu-by-leetcode-solution/