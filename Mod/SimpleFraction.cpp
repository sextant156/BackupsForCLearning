#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    double nleft;
    scanf("%lf",&n);
    int m;
    m = (int)n;
    nleft = n - m;
    cout<<nleft;
    // 输出nleft的type
    int fenmu = 1;
    while(int(nleft)!=nleft)
    {
        nleft = nleft*10;
        fenmu = fenmu*10;
    }

    int c,d,e,f;
    d = (int)nleft;
    c = (int)fenmu;
    e = (int)nleft;
    f = (int)fenmu;
    while(d!=0)
    {
        int temp = c%d;
        c = d;
        d = temp;
    }
    printf("%d %d %d\n",m,e/c,f/c);
    
    

    

    
}