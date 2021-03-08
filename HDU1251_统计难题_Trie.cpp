#include<cstdio>
#include<cstring>    //memset函数的头文件
#include<iostream>
using namespace std;
struct node {
     int count;
     node *next[26];
     node( ) {  //初始化数据
         memset(next, NULL, sizeof(next)); // 代表一开始的时候，next里面都是nullptr
         count = 0;
     }
};
node *p, *root = new node();
void insert(char *s)//插入新单词，即建立字典树
{
     int i, k;
     for(p = root, i = 0; s[i]; ++i)
     {
         k = s[i] - 'a';
         if (p->next[k] == NULL) p->next[k] = new node(); //判断是不是新节点，如果是分配创建一个新节点来存贮 ,即root的next域对应的k位置是否为空
         p = p->next[k];
         p->count++;  //记录此字母出现的次数
     }
}
int search(char *s)  //寻找函数
{
     int i, k;
     for(p = root, i = 0; s[i]; ++i) // 这种for循环的写法应该学习，中间就是逻辑判断语句。根据s[i]的有无，结果为1或者0。
     // 为何中间是逻辑判断？参见一般for循环
     {
         k = s[i] - 'a';
         if (p->next[k] == NULL) break; //一旦查找不到，立即跳出
         p = p->next[k];
     }
     if(s[i]) return 0; // s[i] != 0 表示查不到，前面的for循环中，break出来了。所以return 0。这种if的逻辑判断语句应该学习。
     return p->count;  //返回出现的次数
}

int main()
{
     char s[11]; // 初始化char类型字符串
     while (gets(s), *s) insert(s); // 一直读入数据，直到换行符结束。字典树建树。
     while (gets(s)) // 读入数据，根据已有的字典树查询
        printf("%d\n", search(s));
     return 0;
}

/*
小结：
gets(s)函数与 scanf("%s",s)相似，但不完全相同，使用scanf("%s",s) 函数输入字符串时存在一个问题，就是如果输入了空格会认为字符串结束，
空格后的字符将作为下一个输入项处理，但gets()函数将接收输入的整个字符串直到遇到换行为止。

也就是说：gets()函数读取到\n（我们输入的回车）于是停止读取，但是它不会把\n包含到字符串里面去。
然而，和它配合使用的puts函数，却在输出字符串的时候自动换行。
*/