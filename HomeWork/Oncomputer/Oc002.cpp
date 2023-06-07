#include<bits/stdc++.h>
using namespace std;
void strcatNew(char s[],char t[])
{
    int i = 0;
    int j = 0;
    // 先走到一的末尾
    while (s[i]!='\0')
    {
        i++;
    }
    // 用t的第一位替换s的结束符号，然后开始往s里添加t的字符
    while (t[j]!='\0')
    {
        s[i]=t[j];
        i++;
        j++;
    }
    s[i] = '\0';
    
    
}
int main()
{
    char a[100],b[100];
    scanf("%s",&a);
    scanf("%s",&b);
    strcatNew(a,b);
    printf("%s",a);
}