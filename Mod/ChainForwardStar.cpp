#include<bits/stdc++.h>
using namespace std;
const int maxn=10005;
struct Edge
{
    int to,next,length;
}e[maxn];
// 用结构体数组存储边
int head[maxn],vis[maxn];
// head数组存储每个点的第一条边
// vis数组存储每个点是否被访问过
int n,m,cnt;
// cnt为边的数量
void addEdge(int x,int y,int z)
{
    // 添加一条边
    e[cnt].to=y;
    // 将边的终点设为y
    e[cnt].next=head[x];
    // 将边的下一条边设为head[x]
    e[cnt].length=z;
    // 将边的长度设为z
    head[x]=cnt++;
    // 将head[x]设为当前边的编号
}
int main()
{
    cin>>n>>m;
    for(int i=1,a,b,c;i<=m;i++)
    {
        cin>>a>>b>>c;
        addEdge(a,b,c);
    }
    cout<<head[1];
    cout<<e[head[1]].next;
    cout<<e[e[head[1]].next].next;
    
}

