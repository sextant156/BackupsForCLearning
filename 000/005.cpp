#include<bits/stdc++.h>
using namespace std;
int n,k,m,flagsum,flagi;
int a[100001];
int c,d;
double Max,Avg,sum;
int gcd;
void findans()
{
    for(double i=k;i<=n;i++)
    {
        for(int j=1;j+i-1<=n;j++)
        {
            sum=0;
            for(int h=0;h<=i-1;h++)
            {
                sum=sum+a[j+h];
            }
            Avg=sum/i;
            if(Max<Avg)
            {
                Max=Avg;
                flagsum=sum;
                flagi=i;
            }
            
        }

    }
    gcd=__gcd(flagsum,flagi);
    if(flagsum%flagi==0)
    {
        cout<<flagsum/k;
    }
    else
    {
        cout<<flagsum/gcd<<"/"<<flagi/gcd<<endl;
    }
}
int main()
{
    cin>>n>>k>>m;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    findans();
    for(int i=1;i<=m;i++)
    {
        Max=0;
        scanf("%d%d",&c,&d);
        a[c]=d;
        findans();
    }
}
