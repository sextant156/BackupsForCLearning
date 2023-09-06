#include <bits/stdc++.h>
using namespace std;

#define maxn 10005 // 定义最大顶点数
#define maxm 500005 // 定义最大边数
#define INF 1234567890 // 定义无穷大

struct Edge
{
    int u, v, w, next; // u:起点 v:终点 w:权值 next:下一条边的编号
} e[maxm]; // 存储边的数组

int head[maxn], cnt, n, m, s, vis[maxn], dis[maxn], pre[maxn];
// head:每个顶点的边的起始编号, cnt:边的计数器, n:顶点数, m:边数, s:起始顶点, vis:顶点是否访问过, dis:起始顶点到各顶点的最短路径长度, pre:记录最短路径中的前驱节点

struct node
{
    int w, now;
    inline bool operator<(const node& x) const
    {
        // 重载"<"运算符，比较起始顶点到被比较的两个结点的距离,使得优先队列能够按照最短路径从小到大的顺序选择顶点
        return w > x.w;
    }
};

priority_queue<node> q; // 优先队列，用于选择当前最短路径的顶点

inline void add(int u, int v, int w) // 添加边的函数
{
    e[++cnt].u = u;
    // 添加起点
    e[cnt].v = v;
    // 添加终点
    e[cnt].w = w;
    // 添加"距离"
    e[cnt].next = head[u];
    // 一种类似于字典数据结构中针对同一哈希值数据处理算法的思想,构建单向链表,head[u]为u点的最新一条边,head[u]的next为u点的上一条边,以此类推
    head[u] = cnt;
}

// Dijkstra算法
void dijkstra()
{
    for (int i = 1; i <= n; i++)
    {
        // 初始化起始顶点到其他顶点的距离为无穷大
        dis[i] = INF;
    }
    // s为起始顶点
    // 起始顶点到自身的距离为0
    dis[s] = 0;
    // 将起始顶点加入优先队列
    q.push((node){0, s});
    while (!q.empty())
    {
        node x = q.top(); // 取当前最短路径的顶点
        q.pop();
        int u = x.now;
        if (vis[u] > 0) // 如果顶点已经访问过，则跳过
            continue;
        vis[u] = 1; // 将当前顶点标记为已访问
        for (int i = head[u]; i > 0; i = e[i].next) // 遍历当前顶点的邻接边
        {
            int v = e[i].v;
            if (dis[v] > dis[u] + e[i].w) // 如果通过当前顶点u到达顶点v的路径比已有路径短，则更新最短路径
            {
                dis[v] = dis[u] + e[i].w;
                pre[v] = u; // 更新顶点v的前驱节点为u
                q.push((node){dis[v], v}); // 将顶点v加入优先队列，以便下一轮选择最短路径顶点
            }
        }
    }
}

void printShortestPath(int target)
{
    if (dis[target] == INF)
    {
        cout << "No path from source to target" << endl;
        return;
    }

    vector<int> path;
    int curr = target;
    while (curr != s)
    {
        path.push_back(curr);
        curr = pre[curr];
    }
    path.push_back(s);

    reverse(path.begin(), path.end());

    cout << "Shortest path from source to target: ";
    for (int vertex : path)
    {
        cout << vertex << " ";
    }
    cout << endl;
}

int main()
{
    int cntn = 0;
    cin >> n >> m >> s; // 输入顶点数、边数和起始顶点
    for (int i = 1, x, y, z; i <= m; i++) // 输入边的起点、终点和权值，并添加边
    {
        scanf("%d%d%d", &x, &y, &z);
        add(x, y, z);
    }
    dijkstra(); // 调用Dijkstra算法计算最短路径

    for (int i = 1; i <= n; i++) // 输出起始顶点到各顶点的最短路径长度
    {
        printf("%d ", dis[i]);
    }
    cout << endl;

    int target;
    cout << "Enter the target vertex: ";
    cin >> target;
    printShortestPath(target);

    return 0;
}
