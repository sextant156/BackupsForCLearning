#include<bits/stdc++.h>
using namespace std;
template <typename T>
T add4(T a,T b)
{
    // 模板template
    // T为数据类型的占位符
    return a+b;// 一个对任意两相同数据类型适用的加法
}
void swap(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap2(int& a,int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
inline int add1(int a,int b)
{
    return a+b;
}
int add2(int a,int b)
{
    return a+b;
}
int main()
{
    int x,y;
    x = 1;
    y = 2;
    swap(x,y);
    cout<<x<<y<<endl;
    swap2(x,y);
    // 更好的值交换
    cout<<x<<y<<endl;
    // 引用
    int i,j;
    int& r = i;
    // r是i的别名
    j = 10;
    r = j;
    // 相当于i = j
    // 所以引用不能空载定义，且一旦定义完毕不能更改

    // 内联函数
    // 有点类似宏，不是调用，而是直接把函数文段复制过来
    cout<<add1(1,2)<<endl;
    cout<<add2(1,2)<<endl;
    int add3(int a,int b);
    double add3(double a,double b);
    // 以上两个函数构成重载，也就是函数同名，但根据输入的数据类型不同而判断执行不同的函数

    // 模板实例化
    cout<<add4(1,2)<<endl;
    cout<<add4(1.1,2.2)<<endl;
    // 也可以
    cout<<add4<double>(1.11,2.22)<<endl;

}