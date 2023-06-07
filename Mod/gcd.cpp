#include<bits/stdc++.h>
using namespace std;
int m;
// 求最大公倍数
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
    {
        return gcd(b,a%b);
    } 
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<a/gcd(a,b)<<" "<<b/gcd(a,b);
}