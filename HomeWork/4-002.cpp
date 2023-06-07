#include<bits/stdc++.h>
using namespace std;
// void f(int n)
// {
//     n++;
// }
// int main()
// {
//     int n = 1;
//     f(n);
//     cout<<n;
// }
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    bool flag = 0;
    for(int i = 0;i<n;i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(int i = 0;i<n;i++)
    {
        flag = 0;
        int max = a[i][0];
        for (int j = 0; j < m; j++)
        {
            if(max<a[i][j])
            {
                max = a[i][j];
            }
        }
        for (int j = 0; j < m; j++)
        {
            if(max==a[i][j])
            {
                flag = 0;
                for (int k = 0;k<n;k++)
                {
                    if(max<a[k][j])
                    {
                        flag = 1;
                    }
                }
                if(flag == 0) printf("%d %d %d\n",a[i][j],i+1,j+1);
            }
        }

        
    }

}