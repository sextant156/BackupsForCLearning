#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int jiecheng(int n)
{
    double res=1;
    while (n)
    {
        res*=n;
        n--;
    }
    return res;
    
}
int main()
{
    double x;
    int n;
    scanf("%lf%d",&x,&n);
    double next = 1;
    int i;
    double ans=0;
    for ( i = 0 ; i < n; i++)
    {
        double temp = next*(pow(x,2*i+1)/jiecheng(2*i+1));
        ans+=temp;
        next*=-1;
    }
    printf("%.8lf",ans);
    

}