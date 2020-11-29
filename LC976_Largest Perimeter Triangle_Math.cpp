class Solution {
public:
    int largestPerimeter(vector<int>& A) { // 两边之和大于第三边，先进行排序，从大到小遍历，找到最先满足的即可。因为再往后肯定更差。
        sort(A.begin(), A.end());
        for (int i = A.size() - 1; i >= 2; i--){
            if(A[i - 2] + A[i - 1] > A[i]){
                return A[i - 2] + A[i - 1] + A[i];
            }
        }
        return 0;
    }
};

