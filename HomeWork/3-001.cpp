#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    int n;
    scanf("%lf%d",&x,&n);
    int i;
    double xnow;
    xnow = x;
    for (i = 0; i < n; i++)
    {
        xnow = (xnow+(x/xnow))/2;
    }
    printf("%.5lf",xnow);
    
    
}