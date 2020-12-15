class Solution {
public:
    int candy(vector<int>& ratings) { // 贪心算法
        vector<int> candy(ratings.size(), 1); // 一开始，每个小孩手里都要有糖
        for (int i = 1; i < ratings.size(); i++) { // 从左到右，如果右边小孩得分高，右边小孩就要比左边小孩多一个糖
            if (ratings[i] > ratings[i - 1]) candy[i] = candy[i - 1] + 1;
        }
        for (int j = ratings.size() - 2; j >= 0; j--) { // 从右到左，如果左边小孩比右边小孩得分高，就应该比右边小孩多一个糖。但这是已经从左到右过的结果，因此，
        // 为了真正满足题目要求，此时糖果的更新要将从右到左的数量和本身从左到右的进行比较，较大者胜出。说明这个数值可以满足题目要求，同时也是最小满足要求的数值。
            if (ratings[j] > ratings[j + 1]) candy[j] = max(candy[j], candy[j + 1] + 1); // 注意：这是从右到左的处理。再次从左到右会更麻烦，先左到右，再从右返回到左比较符合逻辑。
        }
        int result = 0; // 统计糖果数
        for (int c : candy) {
            result += c;
        }
        return result;
    }
};

// reference https://mp.weixin.qq.com/s/8MwlgFfvaNYmjGwjuMlETQ