class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        for(int k=0;k<nums.size();++k){   
            if(k>0 && nums[k]==nums[k-1]) continue;
            for(int i=k+1;i<nums.size();i++){
                if(i>k+1 && nums[i-1]==nums[i]) continue;
                int left = i+1;
                int right = nums.size()-1;
                while(left<right){
                    if(nums[k]+nums[i]+nums[left]+nums[right]>target){
                        right--;
                    }
                    else if(nums[k]+nums[i]+nums[left]+nums[right]<target){
                        left++;
                    }
                    else{
                        result.push_back(vector<int> {nums[k],nums[i],nums[left],nums[right]});
                        while(left<right && nums[right]==nums[right-1]) right--;
                        while(left<right && nums[left]==nums[left+1]) left++;
                        right--;
                        left++;
                    }
                }
            }
        }
    return result;
    }
};
// reference https://mp.weixin.qq.com/s/nQrcco8AZJV1pAOVjeIU_g 双指针法
/*
一个很关键的问题：为什么这道题target自定义之后就不能剪枝？？
答：当数组为(-5，-4，-3，0，1，2)时，如果target为-9，-5>-9，但实际上有解。这是因为负数越加越小，但是如果target为0或者正数，就可以添加剪枝条件。
*/
/*
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for (int k = 0; k < nums.size(); k++) {
            // 这种剪枝是错误的，这道题目target 是任意值 
            // if (nums[k] > target) {
            //     return result;
            // }
            // 去重
            if (k > 0 && nums[k] == nums[k - 1]) {
                continue;
            }
            for (int i = k + 1; i < nums.size(); i++) {
                // 正确去重方法
                if (i > k + 1 && nums[i] == nums[i - 1]) {
                    continue;
                }
                int left = i + 1;
                int right = nums.size() - 1;
                while (right > left) {
                    if (nums[k] + nums[i] + nums[left] + nums[right] > target) {
                        right--;
                    } else if (nums[k] + nums[i] + nums[left] + nums[right] < target) {
                        left++;
                    } else {
                        result.push_back(vector<int>{nums[k], nums[i], nums[left], nums[right]});
                        // 去重逻辑应该放在找到一个四元组之后
                        while (right > left && nums[right] == nums[right - 1]) right--;
                        while (right > left && nums[left] == nums[left + 1]) left++;

                        // 找到答案时，双指针同时收缩
                        right--;
                        left++;
                    }
                }

            }
        }
        return result;
    }

};
*/