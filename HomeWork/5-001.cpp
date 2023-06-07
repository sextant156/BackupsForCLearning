#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    scanf("%d",&m);
    int a[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&a[i]);
    }
    int n;
    scanf("%d",&n);
    int b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);
    }
    int max = m>=n?m:n;
    int c[max];
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[i]==b[j])
            {
                c[k] = a[i];
                k++;
                break;
            }
        }
    }
    // 对数组c去重
    for (int i = 0; i < k; i++)
    {
        for (int j = i+1; j < k; j++)
        {
            if(c[i]==c[j])
            {
                for (int l = j; l < k; l++)
                {
                    c[l] = c[l+1];
                }
                k--;
            }
        }
    }    
    
    // 对数组c从大到小排序
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k-i-1; j++)
        {
            if(c[j]<c[j+1])
            {
                int temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp;
            }
        }
    }


    if(k==0) printf("No Answer");
    else
    {
        for (int i = 0; i < k; i++)
        {
            printf("%d ",c[i]);
        }
    }
    // 如果c不为空，输出c
    // 如果c为空，输出“No Answer”
}