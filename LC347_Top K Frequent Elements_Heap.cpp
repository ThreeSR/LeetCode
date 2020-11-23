class Solution {
    class mycomparision{ // 本题用的是堆，对于堆的使用和函数调用还需加强。
    public:
        bool operator()(const pair<int, int>& lhs, const pair<int, int>& rhs){
            return lhs.second > rhs.second;
        }
    };
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); ++i){
            map[nums[i]]++; // 构建映射，map<nums[i],对应出现的次数>
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, mycomparision> pri_que; // 建立优先级队列，就是堆
        for(unordered_map<int, int>::iterator it = map.begin(); it != map.end(); it++){ // 迭代器进行迭代
            pri_que.push(*it); // 入堆
            if(pri_que.size() > k){ // 如果大于k维，则进行出堆操作
                pri_que.pop();
            }
        }
        vector<int> result(k); // 置放最终结果，注意是小括号。
        for(int i = k - 1; i >= 0; i--){ // 因为是小顶堆，所以要倒着放。本题乍一看是要大顶堆，但实际应该是小顶堆。把低频次的出堆，高频次的留下。所以应该用小顶堆。
            result[i] = pri_que.top().first; // .first操作就是访问<int,int>的第一个数值，.second就是第二个。
            pri_que.pop();
        }
    return result;
    }
};

// reference https://mp.weixin.qq.com/s/8hMwxoE_BQRbzCc7CA8rng