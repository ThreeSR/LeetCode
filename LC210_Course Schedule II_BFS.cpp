class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> edges(numCourses);
        vector<int> inDegree(numCourses);
        vector<int> result;
        queue<int> q;
        for (const auto& course : prerequisites) {
            edges[course[1]].push_back(course[0]);
            inDegree[course[0]]++;
        }
        for (int i = 0; i < numCourses; i++) {
            if (inDegree[i] == 0) {
                q.push(i);
            }
        }
        while (!q.empty()) {
            int coursePre = q.front();
            q.pop();
            result.push_back(coursePre);
            for (int edge : edges[coursePre]) {
                inDegree[edge]--;
                if (inDegree[edge] == 0) {
                    q.push(edge);
                }
            }
        }
        if (result.size() != numCourses) return {}; // C++中，空数组是花括号！！ 这一点和Python不同，Python是[]。
        return result;
    }
};

// 本题和LC207很接近，只是最后要输出一个可行解而不是进行bool判断。因此，我们加一个result，把最终结果给出就好。
// 有没有结果的判定很简单，就是与numCourses比较，相等就有，不等则无。注意：无的时候return一个花括号，代表空数组。