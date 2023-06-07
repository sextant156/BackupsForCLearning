#include<bits/stdc++.h>
using namespace std;
#define powerwrong(x) (x*x)
#define power(x) ((x)*(x))
#define output(a,b) b=a*2
#define strcat2(x,y) x y
int main()
{
    // 带参数的宏
    // 只是替换，不太只能
    int x,y;
    x=1;
    y=2;
    cout<<powerwrong(x+y)<<" "<<power(x+y);
    // 通过宏返回多个结果
    int a,b;
    a = 1;
    output(a,b);
    cout<<endl<<b<<endl;
    // 连接两个字符串
    cout<<strcat2("wdwoijed","ujdewuifdwe");
    // 计算数组长度
    // z[5] = {1,2,4,5,6};
    // cout<<sizeof(z)/sizeof(z[0]);
    // c[3] = "wdw";
    // cout<<sizeof(c)/sizeof(char);
    // 二维数组
    int w[2][3] = {{1,2,3},{4,5,6}};
    cout<<endl<<sizeof(w)/sizeof(w[0]);
    // 指针变量
    int *p;
    int q = 10;
    // q是什么类型，p就是什么类型
    p = &q;
    cout<<endl<<*p<<endl;
    *p = 20;
    cout<<q<<endl;


}