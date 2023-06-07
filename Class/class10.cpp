// 结构体
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // 自定义数据类型
    typedef long long ll;
    struct student
    {
        int num;
        char name[2] = {'1','2'};
        // 初始化
        int score;
    }st;
    student *p;
    p = &st;
    cin>>st.name;
    cout<<p->name;
    // 用指针读取结构体的成员
    // strcmp的意思是比较两个字符串是否相等
    // strcpy的意思是把一个字符串复制到另一个字符串
    cout<<st.name;
    char a[] = "dwedd";
    // 枚举
    enum color
    {
        red,
        yellow,
        blue
    };
    color c1,c2;
    c1 = red;
    c2 = blue;
    cout<<c1<<c2;
    // C++里的动态对象
    // new和delete
    int *p1 = new int(10);
    // 申请一个int型的空间，值为10
    // 通过delete来释放内存
    delete p1;

    a = new int[n];
    // 申请一个int型的数组，长度为n
    delete []a;
    a = nullptr;
    // 释放后指针指向空
    // 提升安全性
    if(!a) return 0;
    // 指定指向后不释放就重定义指向会导致内存泄漏
    // 定义二维数组
    b = new int*[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = new int[m];
    }

    
}