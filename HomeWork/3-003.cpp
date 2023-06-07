#include<bits/stdc++.h>
using namespace std;
double abss(double s)
{
    if(s<0)
    {
        return s*=-1;
    }
    else
    {
        return s;
    }
}
int main()
{
    int n = 2;
    double x;
    double pi=4;
    double aa = pi/3;
    double pinext = pi - aa;
    double f = 1;
    scanf("%lf",&x);
    while (abss(pi - pinext)-x>0)
    {
        n++;
        double temp = f/(2*n-1);
        pi = pinext;
        pinext = pi + 4*temp;
        f*=-1;
    }
    // if(x==1)
    // {
    //     n = 3;
    // }
    printf("%d",n);
    
}