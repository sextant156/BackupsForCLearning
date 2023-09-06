#include<bits/stdc++.h>
using namespace std;
int i11()
{
    int a;
    cin>>a;
    return a;
}
int main()
{
    string a;
    int a1 = 3;
    // cin>>a;
    // printf("%s",a.c_str());
    // c_str()是string类的成员函数，返回一个指向正规C字符串的指针常量，内容与本string串相同。
    long b;
    int c;
    b = 1;
    c = 2;
    cout<<b+c;
    // cout<<i11();

    // 计算顺序问题
    a = 3;
    cout<<(a1+=a1-=a1*a1);
    int x;
    x=(a=3,6*3);
    // 逗号表达式，从左到右计算，最后一个表达式的值为整个表达式的值
    cout<<x;
    // 但是
    // 这里a1为赋值的客体，b和c只有独立作用
    x=a1,b,c;
    cout<<x;
    // 输入输出
    // 定义a这个字符串为'Hello,World!'
    a = "Hello,World!";
    // 只能用“”来定义字符串
    // 输出a
    cout<<a<<endl;

    // printf的使用
    // %d表示输出一个整数
    // %s表示输出一个字符串
    // %c表示输出一个字符
    // %f表示输出一个浮点数
    // %lf表示输出一个双精度浮点数
    // %x表示输出一个十六进制数
    // %o表示输出一个八进制数
    // %p表示输出一个指针
    printf("%s\n",a.c_str());
    printf("%8s\n",a.c_str());
    // %8s表示输出一个字符串，占8个字符的位置，不足的用空格补齐,右对齐
    printf("%-8s\n",a.c_str());
    // %-8s表示输出一个字符串，占8个字符的位置，不足的用空格补齐，左对齐
    printf("%8.3s\n",a.c_str());
    // %8.3s表示输出一个字符串，占8个字符的位置，不足的用空格补齐，右对齐，只输出前3个字符
    printf("%-8.3s\n",a.c_str());
    // %-8.3s表示输出一个字符串，占8个字符的位置，不足的用空格补齐，左对齐，只输出前3个字符


}
