class Solution {
public:
    string replaceSpace(string s) { // 双指针法，从后往前移动
        int sOldSize = s.size();
        int count=0;
        for(int i=0;i<sOldSize;i++){
            if(s[i] == ' '){
                count++;  // 统计空格数
            }
        }
        int sNewSize = count*2 + sOldSize;  // 在统计空格数之后，对原有长度进行扩充。这样可以得到一个已知的静态长度string，比动态加入要方便
        s.resize(sNewSize); // 直接resize，新resize之后增加的数组或string空位，里面就是没有元素的
        for(int i=sNewSize-1,j=sOldSize-1;j<i;j--,i--){ // 一个指针指向原来，另一个指向resize后
            if(s[j]!=' '){      // 不空，代表可以在新resize中直接赋值
                s[i] = s[j];
            }
            else{
                s[i] = '0';  // 空的，就在三个string中加入%20
                s[i-1] = '2';
                s[i-2] = '%';
                i -= 2; // i要移动，此外，循环判断的i--也要保留
                //  i<j的条件就足以，因为i和j追平，代表前面的string中也不会有空格了，没有增加的。所以点到为止
            }
        }
        return s; // 对string的处理就像是对数组的处理
    }
};

// reference https://mp.weixin.qq.com/s/t0A9C44zgM-RysAQV3GZpg