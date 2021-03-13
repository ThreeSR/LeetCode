class MyHashSet {  // 哈希表思想的应用
    // 本题需要设计一个哈希表，设计过程中不能调用哈希表的函数。虽然如此，我们依然可以借鉴哈希表的思想，
    // 设输入的数值为key，对应的value为true或false。已经知道输入数据的大小范围之后，设定一个不小于这个范围
    // 的数组，数组的下标就是key，对应数值是true或false。利用这样的想法结合题目，可以得到下面的代码。
    /** Initialize your data structure here. */
    boolean nodes[] = new boolean[1000009];
    
    public void add(int key) {
        nodes[key] = true;
    }
    
    public void remove(int key) {
        nodes[key] = false;
    }
    
    /** Returns true if this set contains the specified element */
    public boolean contains(int key) {
        return nodes[key];
    }
}

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet obj = new MyHashSet();
 * obj.add(key);
 * obj.remove(key);
 * boolean param_3 = obj.contains(key);
 */