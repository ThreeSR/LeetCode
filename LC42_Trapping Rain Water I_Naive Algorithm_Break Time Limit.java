class Solution 
{
    public int trap(int[] height) 
    {
        int sum = 0;
        for(int i=1;i<=getMax(height);i++)
        {
            int temp_sum = 0;
            boolean isStart = false; //按行求雨水，这是起始标志
            for(int j=0;j<height.length;j++)
            {
                if(isStart && height[j]<i)
                {
                    temp_sum++;   
                }
                if(height[j]>=i)  //按行求值，如果遇不到合适的，没办法进入这个循环，累积的temp也不会影响到sum
                {
                    sum += temp_sum; 
                    temp_sum = 0;   //用完temp后清零
                    isStart = true; //启动
                }
            }
        }
        return sum;
    }
       
    private int getMax(int[] height) //Java没有求height的max函数，所以自己写一个方便。可能可以调用库函数
    {
        int max = 0;
        for(int i=0;i<height.length;i++)
        {
            if(height[i]>max)
            {
                max = height[i];
            }
        }
        return max;
    }
}
// reference： https://leetcode-cn.com/problems/trapping-rain-water/solution/xiang-xi-tong-su-de-si-lu-fen-xi-duo-jie-fa-by-w-8/