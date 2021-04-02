int trap(int* height, int heightSize) { // 面试题17.21，同接雨水
    int volume = 0; 
    int Sum = 0; 
    int left = 0; 
    int right = heightSize - 1; 
    int high = 0;
    while (left <= right) {
    high++;
        while ((left <= right) && (height[left] < high)) {
            Sum += height[left];
            left++;
        }
        while ((left <= right) && (height[right] < high)) {
            Sum += height[right];
            right--;
        }
    volume += right - left + 1;
    }
    return volume - Sum;
}

// reference https://leetcode-cn.com/problems/volume-of-histogram-lcci/solution/shuang-zhi-zhen-an-xing-qiu-jie-xiang-xi-d162/