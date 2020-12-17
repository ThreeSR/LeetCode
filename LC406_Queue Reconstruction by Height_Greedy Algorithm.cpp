class Solution {
public:
    static bool cmp(const vector<int>& a, const vector<int>& b) { // 贪心算法  本题比较难理解题意，建议先看一下插入的过程，再进行解题。具体插入过程见链接
        if (a[0] == b[0]) return a[1] < b[1]; // 将个子高的放在前面，此外，同身高的条件下，k小的放在前面
        return a[0] > b[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), cmp); // 先对初始的序列进行一定的排序。这个排序的目的是为了下面好处理，不会使得数据太多，乱了手脚。
        list<vector<int>> queue; // 这里用list，list底层是链表实现。不用vector是因为：vector的insert时间复杂度是n²，而链表的insert是n，所以用链表
        for (int i = 0; i < people.size(); i++) { // 在预排序之后，进行正式插入。我们上面已经定义了一个queue放置结果
            int position = people[i][1]; // 这是得到插入的位置。这是由身高关系和k的意义得到的。可以发现，这样的排序下，始终可以得到这样的position
            std::list<vector<int>>::iterator it = queue.begin(); // 迭代器
            while(position--) { // 目的是使得迭代器指向对应位置
                it++;
            }
            queue.insert(it, people[i]); // 插入对应位置
        }
        return vector<vector<int>> (queue.begin(), queue.end()); // 得到结果。这里注意，因为前面图方便用的是list，这里需要强制类型转换成vector，因为这是题目函数要求的。
    }
};

// reference https://mp.weixin.qq.com/s/-2TgZVdOwS-DvtbjjDEbfw