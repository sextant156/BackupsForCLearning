#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n][2];
    for (i = 0; i < n; i++)
    {
        scanf("%d%d",&a[i][0],&a[i][1]);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d %d ",a[i][0],a[i][1]);
    // }
    int m;
    scanf("%d",&m);
    int b[m][2];
    for (i = 0; i < m; i++)
    {
        scanf("%d%d",&b[i][0],&b[i][1]);
    }
    int c[n*m][2];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            c[i*m+j][0] = a[i][0]*b[j][0];
            c[i*m+j][1] = a[i][1]+b[j][1];
        }  
    }
    // 合并
    int size = m*n;
    for (i = 0; i < m*n; i++)
    {
        if(c[i][1]!=51)
        {
            for (j = i+1; j < m*n; j++)
            {
                if(c[j][1]!=51)
                {
                    if(c[i][1]==c[j][1])
                    {
                        c[i][0]+=c[j][0];
                        // 假删除
                        c[j][1] = 51;
                        size-=1;
                    }
                }
            }
        }
    }
    int d[size][2];
    int k = 0;
    for (i = 0; i < m*n; i++)
    {
        if(c[i][1]!=51)
        {
            d[k][0] = c[i][0];
            d[k][1] = c[i][1];
            k+=1;
        }
    }
    
    // 对d进行排序
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size-i-1; j++)
        {
            if(d[j][1]<d[j+1][1])
            {
                int temp0 = d[j][0];
                int temp1 = d[j][1];
                d[j][0] = d[j+1][0];
                d[j][1] = d[j+1][1];
                d[j+1][0] = temp0;
                d[j+1][1] = temp1;
            }
        }
        
    }
    
    for (i = 0; i < size; i++)
    {
        printf("%d %d ",d[i][0],d[i][1]);
    }
    
    
    
}