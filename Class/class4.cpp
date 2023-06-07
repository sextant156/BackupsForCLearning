// class 3作业
#include<bits/stdc++.h>
using namespace std;
int comb(int a,int b)
{
    int c[3];
    c[2] = b%10;
    c[1] = a/10;
    c[0] = b/10;
    c[3] = a%10;
    return c[3]*1000+c[2]*100+c[1]*10+c[0];
}
int main()
{
    // 1.
    // int a = 2;
    // int b = 3;
    // printf(a>b?"**&&a=%d":"##++b=%d",a,b);
    // '?'的意思是，如果a>b，输出**&&a=%d，否则输出##++b=%d

    // 2.
    // char a='a';
    // float b=2.3;
    // double c=41;
    // int d;
    // d=a+b+c;
    // 输出d的type
    // cout<<typeid(d).name()<<endl;
    // typeid中i对应的是int，d对应的是double，f对应的是float，c对应的是char

    // 3.
    // int a,b,c;
    // scanf("a=%d,b=%d,c=%d", &a, &b, &c);
    // 1 2 3
    // 1 enter 2 enter 3 enter
    // 1,2,3
    // 1#2#3

    // 4.
    // char c1,c2,c3,c4,c5,c6;
    // scanf("%c%c%c%c",&c1,&c2,&c3,&c4);
    // c5 = getchar();
    // c6 = getchar();
    // putchar(c1);
    // putchar(c2);
    // printf("%c%c",c5,c6);
    // cout<<c4;
    // c4，啥也没输出

    // 5.
    // char a = 'A';
    // a+++5;
    // cout<<a;
    // 结果为B


    // 6.
    // int a = 45;
    // int b = 12;
    // cout<<comb(a,b);


    // 笔记部分：选择
    // int a=3;
    // int b=2;
    // int c=1;
    // int d;
    // cout<<(d=a>b); // 1
    // 赋值运算的优先级比比较运算的优先级低
    // int f;
    // f=a>b>c;
    // cout<<f; // 1
    cout<<(00000011&00001010);  // 2








}