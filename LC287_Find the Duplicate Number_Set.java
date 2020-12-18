class Solution {
    public int findDuplicate(int[] nums) { // 用set查找
        Set<Integer> seen = new HashSet<Integer>();
        for (int num : nums) {
            if (seen.contains(num)) { // lookup num
                return num;
            }
            seen.add(num); // insert
        }
        return -1;
    }
}


// reference https://leetcode-cn.com/problems/find-the-duplicate-number/solution/287-6chong-jie-fa-si-lu-xiang-xi-fen-xi-zong-jie-b/