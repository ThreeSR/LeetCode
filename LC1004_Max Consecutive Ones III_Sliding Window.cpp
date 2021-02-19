class Solution {
public:
    int longestOnes(vector<int>& A, int K) { // 滑动窗口
        int result = 0, left = 0, zeros = 0; // 初始化
        for (int right = 0; right < A.size(); right++) { // 右指针移动
            if (A[right] == 0) zeros++; // 遇到0,0的数量加1
            while (zeros > K) { // 当零的数量大于K的时候
                if (A[left] == 0) { // 如果左指针对应的是0
                    zeros--; // 0的数量减一
                }
                left++; // 左指针“被迫”右移
            }
            result = max(result, right - left + 1); // 维护最大值即可
        }
        return result;
    }
};

// 思路详见Solution中的截图