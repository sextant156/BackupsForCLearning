//Multiplication Table 
#include<bits/stdc++.h>
using namespace std;
int n;
int ten[10][10];
int spex[10][10];
char str[16];
int process(int x,int y)
{
    int k,l,r=1,ans;
    k=x;
    while ((k/y)!=0)
    {
        l=k%y;
        k=k/y;
        ans=ans+l*r;
        r=r*10;
    }
    ans=ans+k*r;
    return ans;


}
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=n-1;j++)
        {
            ten[i][j]=i*j;
        }
    }
    if(n==10)
    {
        for(int i=1;i<=9;i++)
        {
            for(int j=1;j<=9;j++)
            {
                printf("%2d",ten[i][j]);
            }
            cout<<endl;
        }
    }
    else
    {
        for(int i=1;i<=n-1;i++)
        {
            for(int j=1;j<=n-1;j++)
            {
                itoa(process(ten[i][j],n),str,10);
                printf("%3s",str);
                
            }
            cout<<endl;
        }

    }

}