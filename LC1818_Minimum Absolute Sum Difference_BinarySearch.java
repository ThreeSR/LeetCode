    class Solution { // 排序+二分法
        public int minAbsoluteSumDiff(int[] nums1, int[] nums2) {
            // 复制一个nums1
            int [] n=new int [nums1.length];
            for(int i = 0; i < n.length; i++){
                n[i] = nums1[i];
            }
            // 对n排序是使用二分的前提
            Arrays.sort(n);
            
            // 用max储存Max(abs(ai-ci)-abs(ai-bi))(i=0,1,2,…，n-1)
            int max = 0;

            // 求max
            for (int i = 0; i < nums1.length; i++){
                // fun返回最优的abs(a-b)
                max = Math.max(max, Math.abs(nums1[i] - nums2[i]) - fun(n, nums2[i]));
            }
            // 长整型防溢出
            long ans = 0;
            for(int i = 0; i < nums1.length; i++){
                ans += Math.abs(nums1[i] - nums2[i]);
            }
            // 减去max就好了
            ans -= max;
            ans = ans % 1000000007;
            
            return (int)ans;
        }
        
        int fun (int [] n, int a){ // 二分法寻找最接近的数值
            int l = 0, r = n.length - 1, mid;
            int la = n[l], ra = n[r];
            while (l <= r){
                mid = r + (r - l) / 2;
                if (n[mid] == a) {
                    return 0;
                } else if (n[mid] < a) {
                    l = mid + 1;
                    la = n[mid];
                } else {
                    r = mid - 1;
                    ra = n[mid];
                }
            }            
           return Math.min(Math.abs(a - la), Math.abs(a - ra)); // 这么做是因为取的数值是绝对值，所以大于和小于的情况都应该考虑
           // 我们需要找寻最近的数值
        }
    }

    // reference https://leetcode-cn.com/problems/minimum-absolute-sum-difference/solution/er-fen-jie-fa-by-qwq-15-jymf/