class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) { // 哈希表法
        unordered_map<int, int> umap; 
        for (int a : A){
            for (int b : B){
                umap[a + b]++; // key:a+b的数值，value:a+b数值出现的次数
        // 遍历大A和大B数组，统计两个数组元素之和，和出现的次数，放到map中 
            }
        }
        int count = 0;  // 统计a+b+c+d = 0 出现的次数
        // 在遍历大C和大D数组，找到如果 0-(c+d) 在map中出现过的话，就把map中key对应的value也就是出现次数统计出来。
        for (int c : C){
            for (int d : D){
                if (umap.find(0 - (c + d)) != umap.end()){
                    count += umap[0 - (c + d)];
                }
            }
        }        
        return count;
    }
};

// reference https://leetcode-cn.com/problems/4sum-ii/solution/454-si-shu-xiang-jia-iimapzai-ha-xi-fa-zhong-de-2/

/*
注意：本题可以这么解，是因为求的是：计算有多少个元组 (i, j, k, l) ，使得 A[i] + B[j] + C[k] + D[l] = 0。我们在意的是元组而不是A B C D中数值是否有重复。
find函数：
find函数主要实现的是在容器内查找指定的元素,并且这个元素必须是基本数据类型的。
查找成功返回一个指向指定元素的迭代器，查找失败返回end迭代器。
因此，在上述代码中，查找失败是用 umap.find(0 - (c + d)) != umap.end() 。
*/