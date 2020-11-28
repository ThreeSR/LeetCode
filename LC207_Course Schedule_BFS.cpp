class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) { // 本题是BFS，也可以认为是拓扑排序。这些基本原理见代码后面的附录。
        // 为了描述方便，称0入度的课为初级课，需要入度的是高级课。
        vector<vector<int>> edges(numCourses); // edges用来存初级课下面的高级课，就像是一个node连着几门大课，有几门课就有几条edge
        vector<int> inDegree(numCourses); // 用来存每门课的入度
        queue<int> q; // 入度为0的课进入queue
        int count = 0; // 如果count可以和numCourses相等，说明可以上完课，return true，反之不行，return false。
        for (const auto& course : prerequisites){ // 为什么auto后面要加&？ 详见Solution的图。
            edges[course[1]].push_back(course[0]); // 将初级课程对应的后续高级课程联系起来
            inDegree[course[0]]++; // 有初级课程cue到高级课程，那么高级课程入度+1
        }
        for (int i = 0; i < numCourses; i++){ // 放入所有的入度为0的课程
            if (inDegree[i] == 0){
                q.push(i);
            }
        }
        while (!q.empty()){ // 当有课程时
            count++; // 结果+1
            int coursePre = q.front(); // 让queue把之前存的初级课程弹出来
            q.pop();
            for (int edge : edges[coursePre]){ // 根据初级课程，向下挖掘对应高级课程的内容
                inDegree[edge]--; // 既然修完初级课程，那么高级课程入度-1
                if (inDegree[edge] == 0){ // 入度为0，代表可以修了
                    q.push(edge);
                }
            }
        }
        return count == numCourses;  // 如果相等，则可以修完；否则不行
    }
};

// reference1 https://leetcode-cn.com/problems/course-schedule/solution/ke-cheng-biao-by-leetcode-solution/
// reference2 https://leetcode-cn.com/problems/course-schedule/solution/bao-mu-shi-ti-jie-shou-ba-shou-da-tong-tuo-bu-pai-/

/* 附录
reference1是官方题解，这里的C++代码参考于此，但增加了可读性；
reference2是相关原理介绍，这里写代码的思路参考于此。
可能有几个问题，是妨碍阅读代码的：

1.什么是拓扑排序？
在图论中，拓扑排序（Topological Sorting）是一个有向无环图（DAG, Directed Acyclic Graph）的所有顶点的线性序列。且该序列必须满足下面两个条件：
每个顶点出现且只出现一次。
若存在一条从顶点 A 到顶点 B 的路径，那么在序列中顶点 A 出现在顶点 B 的前面。
有向无环图（DAG）才有拓扑排序，非DAG图没有拓扑排序一说。
所以，这里选课程显然是一个拓扑排序的过程。具体见链接：https://www.jianshu.com/p/b59db381561a

2.什么是入度和出度？
如果存在一条有向边 A --> B，则这条边给 A 增加了 1 个出度，给 B 增加了 1 个入度。
*/