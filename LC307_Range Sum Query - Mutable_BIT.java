class NumArray { // 树状数组模板题
    // 树状数组模板 
    int[] tree;
    int lowbit(int x) {
        return x & -x;
    }
    int query(int x) {
        int ans = 0;
        for (int i = x; i > 0; i -= lowbit(i)) ans += tree[i];
        return ans;
    }
    void add(int x, int u) {
        for (int i = x; i <= n; i += lowbit(i)) tree[i] += u;
    }

    int[] nums;
    int n;
    public NumArray(int[] _nums) {
        nums = _nums;
        n = nums.length;
        tree = new int[n + 1];
        for (int i = 0; i < n; i++) add(i + 1, nums[i]); // 初始化
    }
    
    public void update(int i, int val) { // 对某一个数值进行update，就是将这个数值加上val - nums[i]，最后再将自身nums[i]进行更新即可
        add(i + 1, val - nums[i]);
        nums[i] = val;
    }
    
    public int sumRange(int l, int r) { // 基本的BIT操作
        return query(r + 1) - query(l);
    }
}

// reference https://leetcode-cn.com/problems/range-sum-query-mutable/solution/guan-yu-ge-lei-qu-jian-he-wen-ti-ru-he-x-41hv/