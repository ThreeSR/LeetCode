class MyHashMap { // 本题和LC705思路一致
    
    private int[] res;
    
    public MyHashMap() {
        res = new int[1000001];
        Arrays.fill(res, -1);
    }
    
    public void put(int key, int value) {
        res[key] = value;
    }

    public int get(int key) {
        return res[key];
    }
    
    public void remove(int key) {
        res[key] = -1;
    }
}
// reference https://leetcode-cn.com/problems/design-hashmap/solution/she-ji-ha-xi-ying-she-shu-zu-xia-biao-bi-xrq9/