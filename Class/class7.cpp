// 储存类型
// auto类型 、 register类型 、 static类型 、 extern类型
// auto类型
// auto类型是C++11新增的类型说明符，用于自动推断变量的类型。
// auto类型说明符的语法格式如下：
// auto 变量名 = 表达式;
// auto自动释放，如五次循环中
// auto i = 0;
// i++;
// cout<<i;
// 结果是 1 1 1 1 1
// static类型则打印1 2 3 4 5因为不自动释放
// register类型
// register类型说明符用于定义存储在寄存器中而不是内存中的局部变量。
#include<bits/stdc++.h>
using namespace std;
int main()
{
    register int i = 0;
    for ( i = 0; i < 10; i++)
    {
        cout<<i;
    }
    
}
// #define 和 undef可以划定一个宏的作用域
// 宏可以当函数用如
// define max(a,b) (a>b?a:b)


