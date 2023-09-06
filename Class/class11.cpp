#include<bits/stdc++.h>
using namespace std;
int main()
{
    // 文件
    FILE *fp;
    // 打开文件
    fp = fopen("test.txt","r");
    if(fp == NULL)
    {

        printf("文件打开失败");
        exit(0);
        // 关闭文件打开进程
        
    }
    // 读取文件
    int a[100];
    for (int i = 0; i < 2; i++)
    {
        fscanf(fp,"%d",&a[i]);
    }
    // 关闭文件
    rewind(fp); 
    // 回到文件开头
    fclose(fp);
    fp = fopen("test.txt","w");
    if(fp == NULL)
    {
        printf("文件打开失败");
        exit(0);
        // 关闭文件打开进程
    }
    for (int i = 0; i < 2; i++)
    {
        fprintf(fp,"%d",a[i]+1);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("%d",a[i]);
    }
    
    

    // 关闭文件
    fclose(fp);

}