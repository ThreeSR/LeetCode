class Solution {
public:
    int minKBitFlips(vector<int>& A, int K) { // 滑动窗口 队列
        int len = A.size();
        queue<int> que; 
        int result = 0;
        for (int i = 0; i < len; i++) {
            if (!que.empty() && i >= que.front() + K) { // que不空，并且que最前面的元素已经在滑窗外，“过期了”
                que.pop(); // 弹出
            }
            if (que.size() % 2 == A[i]) { // 这里判断的原因详见Solution中的图，很巧妙。把各种情况都考虑到了
                if (i + K > len) return -1; // 如果滑窗超过了数组长度，那么失败
                result++; // 成功。那么就把翻转次数++
                que.push(i); // 把开始翻转的index（位置）放进队列
            }
        }
        return result;
    }
};

// reference https://leetcode-cn.com/problems/minimum-number-of-k-consecutive-bit-flips/solution/hua-dong-chuang-kou-shi-ben-ti-zui-rong-z403l/