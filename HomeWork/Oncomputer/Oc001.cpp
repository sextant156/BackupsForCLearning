#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    // 输入第一个矩阵的参数
    scanf("%d%d",&m,&n);
    int x[m][n];
    // 输入第一个矩阵的具体值
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&x[i][j]);
        }
        
    }
    int b;
    // 输入第二个矩阵的参数
    scanf("%d",&b);
    int y[n][b];
    // 输入第二个矩阵的具体值
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d",&y[i][j]);
        }
        
    }
    int z[m][b];
    // 新矩阵初始化为0
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < b; j++)
        {
            z[i][j] = 0;
        }
        
    }
    // 填充新矩阵
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for(int k = 0;k<n;k++)
            {
                z[i][j]+=(x[i][k]*y[k][j]);
            }
        }
        
    }
    // 打印新矩阵
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ",z[i][j]);
        }
        cout<<endl;
    }
    // 简单测试用例
    // 输入第一个矩阵
    // 2 2
    // 1 1 1 1
    // 输入第二个矩阵（行不必再输了，只有行=前一个矩阵的列才能做矩阵乘法）
    // 1
    // 2 2
    // 结果
    // 4
    // 4
    
}