public class Solution { // 本题同接雨水
     public int trap(int[] height) 
     {
         int sum = 0;
         for(int i = 0;i<height.length;i++) {
            sum += height[i];
         }//求数组总和
         int volume = 0; // 总体积和高度初始化
         int high = 1;
         int size = height.length;
         int left = 0; // 双指针初始化
         int right = size - 1;
         while (left <= right) {
             while (left <= right && height[left] < high) {
                 left++;
             }
             while (left <= right && height[right] < high) {
                 right--;
             }
             volume += right - left + 1; // 每一层的容量都加起来
             high++; // 高度加一
         }
         return volume -sum; // 总体积减去柱子体积，即雨水总量
     }
}

// reference https://leetcode-cn.com/problems/volume-of-histogram-lcci/solution/shuang-zhi-zhen-an-xing-qiu-jie-xiang-xi-d162/