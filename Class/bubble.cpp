#include<bits/stdc++.h>
using namespace std;
template<typename T>
// 模板
int main()
{
    int a[100];
    for (int i = 0; i < 10; i++)
    {
        cin>>a[i];
    }
    for(int i = 0;i<10;i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        
    }
    
}