class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxheap;
        for (int s : stones) {
            maxheap.push(s);
        }
        while (maxheap.size() > 1) {
            int p = maxheap.top();
            maxheap.pop();
            int q = maxheap.top();
            maxheap.pop();
            if (p > q) maxheap.push(p - q);
        }
        return maxheap.empty() ? 0 : maxheap.top();
    }
};

// 大顶堆的使用  
/*
如何想到这题是堆？
首先，堆有排序的作用；再者，这边的石块可能粉碎之后要继续进入数组，也就是说，如果单单是排序，一直调用sort函数也不是个办法。
那有什么东西可以拿出来就能用，用完了就丢进去？只能是堆了，所以用大顶堆。
*/