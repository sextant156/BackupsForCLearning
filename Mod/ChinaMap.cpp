#include<bits/stdc++.h>

using namespace std;

// 结构体-边
struct Edge 
{
    int from;
    int to;
    int weight;

    // 构造函数
    Edge(int f, int t, int w) : from(f), to(t), weight(w) {}
};

// Prim算法实现
vector<Edge> primAlgorithm(vector<vector<int>>& graph) 
{
    int n = graph.size(); // 城市的数量
    vector<bool> visited(n, false); // 标记城市是否被访问过
    vector<Edge> minSpanningTree; // 最小生成树的边集合

    // 从第一个城市开始
    visited[0] = true;

    // 存储每个城市到最小生成树的最短距离
    vector<int> minDistance(n, INT_MAX);

    // 存储每个城市的父节点，用于构建最小生成树
    vector<int> parent(n, -1);

    // 使用优先队列来选择最短的边
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    // 将第一个城市的所有邻接边加入优先队列
    for (int i = 1; i < n; i++) 
    {
        if (graph[0][i] != 0) 
        {
            pq.push(make_pair(graph[0][i], i));
            minDistance[i] = graph[0][i];
            parent[i] = 0;
        }
    }

    // 执行Prim算法
    while (!pq.empty()) 
    {
        int currCity = pq.top().second;
        pq.pop();
        visited[currCity] = true;

        // 将找到的边加入最小生成树
        minSpanningTree.push_back(Edge(parent[currCity], currCity, graph[parent[currCity]][currCity]));

        // 更新邻接城市的最短距离和父节点
        for (int i = 0; i < n; i++) 
        {
            if (!visited[i] && graph[currCity][i] != 0 && graph[currCity][i] < minDistance[i]) 
            {
                pq.push(make_pair(graph[currCity][i], i));
                minDistance[i] = graph[currCity][i];
                parent[i] = currCity;
            }
        }
    }

    return minSpanningTree;
}

int main() {
    // 城市的数量
    int n;
    cout << "请输入城市数量: ";
    cin >> n;

    // 构建邻接矩阵图
    vector<vector<int>> graph(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cin >> graph[i][j];
        }
    }

    // 执行Prim算法
    vector<Edge> minSpanningTree = primAlgorithm(graph);

    // 输出最小生成树的边
    cout << "最短路径为:" << endl;
    for (const Edge& edge : minSpanningTree) 
    {
        cout << edge.from << " - " << edge.to << " : " << edge.weight << endl;
    }

    return 0;
}
