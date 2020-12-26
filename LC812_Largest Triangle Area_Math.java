class Solution {
    public double largestTriangleArea(int[][] points) {  // 鞋带公式  数学暴力解  此外还可以用海伦公式 可以调用Python的NumPy
        int N = points.length;
        double ans = 0;
        for (int i = 0; i < N; ++i)
            for (int j = i+1; j < N; ++j)
                for (int k = j+1; k < N; ++k)
                    ans = Math.max(ans, area(points[i], points[j], points[k]));
        return ans;
    }

    public double area(int[] P, int[] Q, int[] R) {
        return 0.5 * Math.abs(P[0]*Q[1] + Q[0]*R[1] + R[0]*P[1]
                             -P[1]*Q[0] - Q[1]*R[0] - R[1]*P[0]);
    }
}

// https://leetcode-cn.com/problems/largest-triangle-area/solution/zui-da-san-jiao-xing-mian-ji-by-leetcode/