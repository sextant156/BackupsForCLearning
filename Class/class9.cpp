#include<bits/stdc++.h>
using namespace std;
void  oo(int *x)
{
    *(x+1)+=1;
}
int main()
{
    int a[] = {1,2,3,4,5};
    int *p;
    p = a;
    oo(p);
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i];
    }
    char c = 0;
    printf("%c",c);
    char *cp;
    cp = "2wpkdodoijejdeojde";
    // 更好地给字符串赋值
    // 指针数组
    int b[2][3];
    int *pb[2];
    pb[0] = b[0];
    pb[1] = b[1];
    // pb0指向第一行入口
    // pb1指向第二行入口

}