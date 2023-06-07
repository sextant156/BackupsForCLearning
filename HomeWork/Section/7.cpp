#include<bits/stdc++.h>
using namespace std;
int main()
{
    // 若有下面的程序片断则正确的sort函数头部是
    // (A) void sort ( char p[ ][ ], int x );
    // (B) void sort ( char p[ ][8], int x );
    // (C) void sort ( char p[10][ ], int x );
    // (D) void sort ( char **p, int x );

    // void main( ) 
    // {
        // int n;
        // char a[10][8];
        // 省略号
        // sort(a, n);
        // 省略号 
    // }
    // 答案为B。
    // A和C没有指定列数，是明显错误；
    // D必须实参是指针，被调函数形参才能用二级指针。
    float d,*p = &d;
    // 上面这个*p的类型是float*
    // 这里的*是用来声明指针的
    cin>>d;
    cout<<*p;
    // 上面这个*p类型是float
    // 这里的*是用来取值的
}