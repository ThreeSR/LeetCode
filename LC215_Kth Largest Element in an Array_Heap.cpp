class Solution {
    class myComparison {
        public:
            bool operator()(int left, int right) {
                return left > right;
            }
    };
public:
    int findKthLargest(vector<int>& nums, int k) { // 堆
        priority_queue<int, vector<int>, myComparison> heap; // 小顶堆
        for (int num : nums) {
            heap.push(num);
            if (heap.size() > k) heap.pop();
        }
        int result = heap.top();
        return result;
    }
};