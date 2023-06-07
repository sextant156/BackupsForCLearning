#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][3];
    a[0][1] = 8;
    cout<<*(*(a)+1);
    int (*p)[3];
    // p是一个指针，指向一个数组，数组的元素是4个int
    p = a;
    // p指向a的第一行
    int sum;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum+=p[i][j];
        }
        
    }
    int *q1[5];
    *(q1[0]) = 50;
    cout<<" "<<*q1[0];
    // cout<<sum;
    
}