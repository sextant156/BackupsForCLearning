// 动态分配二维数组
#include<bits/stdc++.h>
using namespace std;
void print(double **a,int m,int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%.1lf ",*(*(a+i)+j));
        }
        printf("\n");
    }
}
double** setm(int m,int n)
{
    double *(*c);
    c = (double**)malloc(100*sizeof(double*));
    for(int i = 0 ; i < m ; i++)
    {
            *(c+i) = (double*)malloc(100 * sizeof(double));
            for (int j = 0; j < n; j++)
            {
                scanf("%lf",*(c+i)+j);
            }
    }
    return c;
}
double** multi(double **a,double **b,int m,int n,int l)
{
    double *(*d);
    d = (double**)malloc(100*sizeof(double*));
    for(int i = 0 ; i < m ; i++)
    {
        *(d+i) = (double*)malloc(100 * sizeof(double));
    }
    for(int i = 0 ; i < m ; i++)
    {
        for (int j = 0; j < l; j++)
        {
            *(*(d+i)+j) = 0;
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < l; j++)
        {
            for (int k = 0; k < n; k++)
            {
                *(*(d+i)+j) =*(*(d+i)+j) + (*(*(a+i)+k)) * (*(*(b+k)+j));
            }
        }
    }
    return d;
    
}
int main()
{
    int m,n,l;
    double **a;
    double **b;
    // 设置矩阵
    scanf("%d%d%d",&m,&n,&l);
    a = setm(m,n);
    b = setm(n,l);
    // 合并矩阵
    double **c;
    c = multi(a,b,m,n,l);
    // 打印矩阵
    // print(a,m,n);
    // print(b,n,l);
    print(c,m,l);
    // 释放内存
    free(a);
    free(b);
    free(c);
}