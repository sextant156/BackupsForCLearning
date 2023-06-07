#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// 随机生成数
void Random(double a[])
{
    // 设置随机数种子
    srand((unsigned)time(NULL));
    for (int i = 0; i < 100; i++)
    {
        a[i] = rand();
    }
}
// 从大到小排序
void Sort(double a[])
{
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100 - i - 1; j++)
        {
            if (a[j]<a[j+1])
            {
                double temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
// 求平均数
double Avg(double a[])
{
    double sum; 
    for (int i = 0; i < 100; i++)
    {
        sum+=a[i];
    }
    return sum/100.0;
}
// 求方差
double Var(double a[])
{
    double avg = Avg(a);
    double sum;
    for (int i = 0; i < 100; i++)
    {
        sum+=(a[i]-avg)*(a[i]-avg);
    }
    return sum/100.0;
}
int main()
{
    double a[101];
    Random(a);
    // 排序
    Sort(a);
    printf("Avg %.2lf\n",Avg(a));
    printf("Max %.1lf\n",a[0]);
    printf("Min %.1lf\n",a[99]);
    printf("Var %.2lf\n",Var(a));
}