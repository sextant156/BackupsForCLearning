#include<stdio.h>
int main()
{
    int m,i,j,l;
    scanf("%d",&m);
    int a[m];
    for (i = 0; i < m; i++)
    {
        scanf("%d",&a[i]);
    }
    int n;
    scanf("%d",&n);
    int b[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);
    }
    int max = m>=n?m:n;
    int c[max];
    int k = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
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
    for (i = 0; i < k; i++)
    {
        for (j = i+1; j < k; j++)
        {
            if(c[i]==c[j])
            {
                for (l = j; l < k; l++)
                {
                    c[l] = c[l+1];
                }
                k--;
            }
        }
    }    
    
    // 对数组c从大到小排序
    for (i = 0; i < k; i++)
    {
        for (j = 0; j < k-i-1; j++)
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
        for (i = 0; i < k; i++)
        {
            printf("%d ",c[i]);
        }
    }
    // 如果c不为空，输出c
    // 如果c为空，输出“No Answer”
}