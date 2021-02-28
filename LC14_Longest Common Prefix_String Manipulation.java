class Solution {
    public String longestCommonPrefix(String[] strs) { // 字符串处理 
    // 思路简单：将第一个string设置成公共前缀，然后逐一和其他string比较，逐步减小公共子串的长度，
    // 如果最后还有公共部分，代表有公共前缀；反之则无，可以提前break
        if(strs.length == 0)  
            return "";
        String ans = strs[0];
        for(int i = 1; i < strs.length; i++) {
            int j = 0;
            for(; j < ans.length() && j < strs[i].length(); j++) {
                if(ans.charAt(j) != strs[i].charAt(j))
                    break;
            }
            ans = ans.substring(0, j);
            if(ans.equals(""))
                return ans;
        }
        return ans;
    }
}

// reference https://leetcode-cn.com/problems/longest-common-prefix/solution/hua-jie-suan-fa-14-zui-chang-gong-gong-qian-zhui-b/