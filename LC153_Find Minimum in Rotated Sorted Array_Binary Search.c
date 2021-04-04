int findMin(int* nums, int numsSize){ // 二分搜索
    int left = 0;
    int right = numsSize - 1;
    while (right > left) {
        int mid = left + (right - left) / 2;
        if (nums[mid] > nums[right]) // 注意题目对于数组的递增要求与性质
            left = mid + 1;
        else
            right = mid;
    }
    return nums[left];
}