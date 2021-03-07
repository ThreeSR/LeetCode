struct TrieNode { // 字典树结构的定义
    int frequency = 0;
    TrieNode* child[26];
    TrieNode() {
        for (int i = 0; i < 26; ++i) {
            child[i] = nullptr;
        }
    }
};
class Solution { // 本题为字典树的经典题目
private:
    TrieNode* root;

public:
    void add (const string& word) {
        TrieNode* cur = root;
        for (char ch: word) {  // 字典树的创建
            if (!cur->child[ch - 'a']) {
                cur->child[ch - 'a'] = new TrieNode();
            }
            cur = cur->child[ch - 'a'];
        }
        cur->frequency++;
    }
    int find (const string& puzzle, char required, TrieNode* cur, int pos) { // 回溯
            // 用回溯的原因就是：将puzzle的子集进行枚举，将枚举结果和字典树上的结果进行对比，如果有，则说明这个字典树的单词可以是谜底。
            // 注意什么样的word可以是puzzle的谜底：1.包含puzzle首字母；2.是puzzle的子串，换言之就是word中的字母可以完全在puzzle中找到。
            // 搜索到空节点，不合法，返回 0
            if (!cur) {
                return 0;
            }
            // 整个 puzzle 搜索完毕，返回谜底的数量
            if (pos == 7) {
                return cur->frequency;
            }
            
            // 选择第 pos 个字母
            int result = find(puzzle, required, cur->child[puzzle[pos] - 'a'], pos + 1);

            // 当 puzzle[pos] 不为首字母时，可以不选择第 pos 个字母
            if (puzzle[pos] != required) {
                result += find(puzzle, required, cur, pos + 1); // 这种写法相当于把某一个字母给忽略过去了
            } 
            return result;
        }
    vector<int> findNumOfValidWords(vector<string>& words, vector<string>& puzzles) {
        root = new TrieNode();
        // 在回溯的过程中枚举 puzzle 的所有子集并统计答案
        // find(puzzle, required, cur, pos) 表示 puzzle 的首字母为 required, 当前搜索到字典树上的 cur 节点，并且准备枚举 puzzle 的第 pos 个字母是否选择（放入子集中）
        // find 函数的返回值即为谜底的数量
        for (string word: words) {
            // 将 word 中的字母按照字典序排序并去重
            // 排序的目的是和回溯的要求相关的。回溯就是组合，组合其实是没有顺序的。如果想要对puzzle的子集进行组合，并且和字典树中的内容进行比较，必须逐个单词地在一定
            // 顺序下比较，一步步都正确了才可以比对成功。所以这时候我们需要对组合的结果进行排序，或者说在一开始就对word和puzzle排序，最终得到的组合结果和字典树的对比
            // 才可以对得上，是有序的。
            sort(word.begin(), word.end());
            word.erase(unique(word.begin(), word.end()), word.end()); // 去重。其实这里去重也是需要排序的，所以上面的排序不光为了后续的匹配，也是为了去重。
            // 加入字典树中
            add(word);
        }
        vector<int> ans;
        for (string puzzle: puzzles) {
            char required = puzzle[0]; // 第一个单词是必要的
            sort(puzzle.begin(), puzzle.end()); // 排序
            ans.push_back(find(puzzle, required, root, 0)); // 回溯
        }
        return ans;
    }
};

// reference https://leetcode-cn.com/problems/number-of-valid-words-for-each-puzzle/solution/cai-zi-mi-by-leetcode-solution-345u/
/*
附录：谈谈erase和unique函数：
1.erase：
erase一共三种用法：
1.erase(pos,n);
删除从下标pos开始的n个字符，比如erase(0,1)就是删除第一个字符
2.erase(position);
删除postion处的一个字符（position是一个string类型的迭代器）
3.erase(first,last)
删除从first到last之间的字符（first和last都是迭代器）

2.unique：
unique的作用是“去掉”容器中相邻元素的重复元素，这里去掉要加一个引号，为什么呢，是因为它实质上是一个伪去除，它会把重复的元素添加到容器末尾，
而返回值是去重之后的尾地址（是地址！！）。

所以针对于unique的用法，可以总结出来两点：
1.如果去重指的是相邻元素，那么需要先对数组排序，这就是上面排序的原因；
2.去重之后，返回的是尾地址。这时候尾地址作为开始，word.end()作为终止，在这个范围内使用erase函数清除，显然可以清理掉所有重复元素，相当于
把结尾的所有重复元素都清仓了。  这其实就是上面那行代码，用于清除重复元素的原理。
*/