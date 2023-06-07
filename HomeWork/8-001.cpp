#include<bits/stdc++.h>

using namespace std;
// 删除
int main()
{
    int i,j;
    int m,n;
    scanf("%d",&m);
    int m1 = m/2;
    int a1[m];
    int a[m1][2];
    int pos = 0;
    for (i = 0; i < m; i++)
    {
        scanf("%d",&a1[i]);
    }
    for (i = 0; i < m1; i++)
    {
        a[i][1] = a1[pos];
        a[i][2] = a1[pos+1];
        pos+=2;
    }
    scanf("%d",&n);
    int n1 = n/2;
    int b1[n];
    int b[n1][2];
    for(i=0;i<n;i++)
    {
        scanf("%d",&b1[i]);
    }
    pos = 0;
    for (i = 0; i < n1; i++)
    {
        b[i][1] = b1[pos];
        b[i][2] = b1[pos+1];
        pos+=2;
    }
    int c[m1+n1][2];
    int cnt = 0;
    bool flag = 0;
    for (i = 0; i < m1; i++)
    {
        flag = 0;
        for(j = 0;j<n1;j++)
        {
            if(b[j][2] == a[i][2])
            {
                c[cnt][1] = b[j][1] + a[i][1];
                c[cnt][2] = a[i][2];
                b[j][2] = -1;
                cnt++;
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            c[cnt][1] = a[i][1];
            c[cnt][2] = a[i][2];
            cnt++;
        }
    }
    for (i = 0; i < n1; i++)
    {
        if(b[i][2]!=(-1))
        {
            c[cnt][1] = b[i][1];
            c[cnt][2] = b[i][2];
            cnt++;
        }
    }
    // // 输出a
    // for (int i = 0; i < m1; i++)
    // {
    //     printf("%d %d ",a[i][1],a[i][2]);
    // }
    // cout<<endl;
    // for (int i = 0; i < m; i++)
    // {
    //     cout<<a1[i]<<" ";
    // }
    
    // // 输出b
    // for (int i = 0; i < n1; i++)
    // {
    //     printf("%d %d ",b[i][1],b[i][2]);
    // }
    
    // // 输出c
    // 对c进行排序
    for (i = 0; i < cnt; i++)
    {
        for (j = 0; j < cnt-i-1; j++)
        {
            if(c[j][2]<c[j+1][2])
            {
                int temp = c[j][2];
                c[j][2] = c[j+1][2];
                c[j+1][2] = temp;
                temp = c[j][1];
                c[j][1] = c[j+1][1];
                c[j+1][1] = temp;
            }
        }
    }
    for (i = 0; i < cnt; i++)
    {
        printf("%d %d ",c[i][1],c[i][2]);
    }
    printf("\n");
    
    

    
}
