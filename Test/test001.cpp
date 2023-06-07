#include<bits/stdc++.h>
using namespace std;
int main()
{
    // char c = '0'+2;
    // // 输出c的type
    // cout<<typeid(c).name()<<endl;
    // int a = -1;
    // printf("%d,%u\n",a,a);
    // // %u是无符号整数
    // // 若一个int占两个字节，则    
    // // int a = -1;
    // // printf("%d,%u\n",a,a);的输出结果是
    // // 现在开始分析
    // // 一个字节是8位
    // // 即a为 1000 0000 0000 0001
    // // 输出无符号u。取a的后15位的反码
    // // 即 111 1111 1111 1110
    // // 十进制为 32767
    // for(int i = 3;i<=2;i++)
    // {
    //     cout<<1;
    // }
    int x = 3;
    do
    {
        printf("%d\n",x-=2);
    } while (!(--x));
    

}