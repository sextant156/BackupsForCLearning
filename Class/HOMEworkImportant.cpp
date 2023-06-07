// 函数调用数组，传的是数组的首地址
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10, y = 9; 
    int a, b, c; 
    a = (--x == y++)? --x: ++y;
    // 第一步，括号内的x=9，y=9
    // 判断为True向后传值，然后y++，y=10
    // 第三步，--x，x=8,然后赋值给a
    b = x++;
    // x赋值给b，b=8，然后x++，x=9 
    c = y;
    cout<<a<<" "<<b<<" "<<c;
}
