#include<bits/stdc++.h>
using namespace std;
double f1(int x)
{
    if (x==1)
    {
        return 1;
    }
    else
    {
        return x*f1(x-1);
    }
    
}
int main()
{
    cout<<"Input n:"<<endl;
    int n;
    cin>>n;
    cout<<" Input k:"<<endl;
    int k
    cin>>k;
    cout<<f1(5)<<endl;
}