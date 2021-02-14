class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        int result = 0;
        int n = row.size();
        for (int i = 0; i < n; i += 2) {
            if (row[i] == (row[i + 1] ^ 1)) continue; // 运用异或运算判断是不是一对情侣
            for (int j = i + 1; j < n; j++) { // 如果不是，再进行搜寻
                if ((row[j] ^ 1) == row[i]) { // 找到了另一半
                    swap(row[i + 1], row[j]); // 交换座位
                    result++; // 交换次数+1
                    break;
                }
            }
        }
        return result; 
    }
};