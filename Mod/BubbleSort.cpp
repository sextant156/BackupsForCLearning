// 冒泡排序
#include<bits/stdc++.h>
using namespace std;
bool flag;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    // 冒泡排序
    int temp;
    for(int i = 0;i<n;i++)
    {
        flag = false;
        for(int j = 0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
                flag = true;
            }
        }
        if(flag == false)
        {
            break;
        }
    }
}