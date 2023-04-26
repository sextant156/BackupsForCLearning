#include<bits/stdc++.h>
#define int long long//偷的，只能说天才
using namespace std;
const int inf = 1e13;
int n,m,u,v,w,ans = inf;
int dis[128][128];
// dis[i][j]表示i到j的最短路
int mp[128][128];
// mp[i][j]表示i到j的最小环
//定义int 为longlong后 signed main是必须的，否则int main=long long main,不合法
signed main(void)
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(i!=j)dis[i][j]=mp[i][j]=inf;
		// 初始化为无穷大，表示不存在边
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d%d",&u,&v,&w);
		// 输入边的两个端点和权值
		dis[u][v]=min(dis[u][v],w);
		// 更新最短路
		dis[v][u]=min(dis[v][u],w);
		// 无向图，更新反向边，无向图的最短路是双向的
		mp[u][v]=min(mp[u][v],w);
		// 更新最小环
		mp[v][u]=min(mp[v][u],w);
		// 无向图，更新反向边，无向图的最小环是双向的
	}
	for(int k=1;k<=n;k++)
    {
		for(int i=1;i<k;i++)
			for(int j=i+1;j<k;j++)
				ans = min(ans,dis[i][j]+mp[i][k]+mp[k][j]);
                //所有存在/不存在的边
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
            {
				dis[i][j] = min(dis[i][j],dis[i][k]+dis[k][j]);
				dis[j][i] = dis[i][j];
			}
		
	}
	if(ans==inf)cout<<"No solution.";
	else cout<<ans;
	return 0;
}