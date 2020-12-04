/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution { // 克隆图，也就是深拷贝 deepcopy，反之也有浅拷贝 shallowcopy。如果是浅拷贝，那么直接设置一个指针，指向和原指针同样的内容即可。
// 但浅拷贝有问题，就是如果根据新拷贝的指针，可以找到原指针对应的内容。如果有人想对原内容进行修改，会更加容易。就是说，安全性会下降。
// 这时候引入深拷贝。深拷贝是把原内容+原内容之间的关系全部拷贝下来。对应到这题中，如果要对graph进行深拷贝，需要两步走： 1. 拷贝所有node；2.拷贝node间的关系。
// 由于这是无向图，如果不处理好访问过的节点，会出现死循环。因此，我们需要加一个名为visited的哈希表。table中的key是现在节点，value是拷贝出来的节点。
public:
    Node* cloneGraph(Node* node) {
        if (node == nullptr) return nullptr; // 特判
        queue<Node*> q; // 队列，用来放置后续要处理的节点，node 或 neighbor
        unordered_map<Node*, Node*> visited; // visited 哈希表
        visited[node] = new Node(node->val); // 构建新的克隆图，新的node是对应于原本visited中的老node的。 这是深拷贝的第一步。
        q.push(node); // 放入队列
        while (!q.empty()) { // 当队列不为空
            auto n = q.front(); // 对节点逐个处理。这种思路在BFS中常见，之前Tree的BFS基本也是这个套路。
            q.pop();
            for (auto& neighbor : n->neighbors) { // 现在进行深拷贝的第二步，即在新生成的节点上，增加原有的连接关系
                if (visited.find(neighbor) == visited.end()) { // 如果找不到
                    visited[neighbor] = new Node(neighbor->val); // 没有这个neighbor，即生成一个node，这是深拷贝的第一步
                    q.push(neighbor); // 放入队列，等之后处理
                }
                visited[n]->neighbors.push_back(visited[neighbor]); // 当目前处理的节点的邻居节点增加妥当之后，把连接关系赋给处理中的节点
            }
        }
        return visited[node]; // return新生成的节点中最早的那个即可
    }
};

// reference https://leetcode-cn.com/problems/clone-graph/solution/ke-long-tu-by-leetcode-solution/