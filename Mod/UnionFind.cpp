#include<bits/stdc++.h>
using namespace std;
int f[10001];
int n,m;
int a,b,c;
int find(int k)
{
    if(f[k]==k)
    {
        return k;
    }
    return f[k]=find(f[k]);
    // 最终结果都会是return k
    // 路径压缩，让上级、上上级也归于最高上级

}
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        f[i]=i;
        // 初始化，每个人都是自己的上级
    }
    for(int i=1;i<=m;i++)
    {
        cin>>a>>b>>c;
        if(a==1)
        {
            // a为1时，输入关系
            // 将b的上级设为c的上级
            f[find(b)]=find(c);
        }
        else
        {
            // a为2时，输入询问
            if(find(b)==find(c))
            {
                cout<<"Y\n";
            }
            else
            {
                cout<<"N\n";
            }
        }
    }


}