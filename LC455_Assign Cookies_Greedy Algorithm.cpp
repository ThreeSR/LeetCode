class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) { // 贪心算法
        sort(g.begin(),g.end()); // 先排序
        sort(s.begin(),s.end());
        int index = s.size();
        int count = 0;
        for(int i = g.size() - 1; i >= 0; i--){ // 从大到小进行比较，如果饼干可以比孩子需求尺寸大，就给孩子。因为是从大到小一步步比较，所以给的过程不会浪费
            if(index >= 1 && s[index - 1] >= g[i]){ // 大于孩子需求  这里注意：index >= 1 ！ 这是由s[index - 1]而定。在利用数组索引时，要关注索引值大于等于0的隐性条件
                count++;
                index--; // 这里本来是两层for循环，但由于本题要求，所以可以改成单层for循环，降低了运算复杂度。这种index--的方法是值得学习的。但注意index--的底线是什么。
            }
        }
        return count;
    }
};

// reference https://mp.weixin.qq.com/s/YSuLIAYyRGlyxbp9BNC1uw  具体实现的动图见链接