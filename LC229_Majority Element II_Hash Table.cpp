class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); ++i){
            map[nums[i]]++;
            if(map[nums[i]] > nums.size() / 3){ // 大于1/3就拉进result中
                result.push_back(nums[i]);
            }
        }
        set<int> s(result.begin(), result.end());  // 但是进入到result中，可能会有重复，所以用set去重
        result.assign(s.begin(), s.end());
        return result;
    }
};

/*
assign方法可以理解为先将原字符串清空，然后赋予新的值作替换。用法如上
下面是set去重的方法。如果不替换，那么只是在set中是去重结果，不会叠加到result上。
#include<set>
#include<vector>
#include<iostream>
using namespace std;


int main()
{
vector<int> vec;
vec = { 1, 2, 3, 4, 8, 9, 3, 2, 1, 0, 4, 8 };
set<int> st(vec.begin(), vec.end());
vec.assign(st.begin(), st.end());


vector<int>::iterator it;
for (it = vec.begin(); it != vec.end(); it++)
cout << *it<<endl;
return 0;
}

*/