#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);
    int b[m];
    for(int i = 0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    int c[n+m];
    for (int i = 0; i < n+m; i++)
    {
        if(i<n)
        {
            c[i] = a[i];
        }
        else
        {
            c[i] = b[i-n];
        }
    }
    // 排序
    int temp;
    for(int i = 0;i<n+m;i++)
    {
        int flag = 0;
        for(int j = 0;j<n+m-i-1;j++)
        {
            if(c[j]>c[j+1])
            {
                temp = c[j+1];
                c[j+1] = c[j];
                c[j] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
        {
            break;
        }
    }
    for (int i = 0; i < n+m; i++)
    {
        printf("%d ",c[i]);
    }
    


}