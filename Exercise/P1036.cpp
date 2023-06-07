// P1036 [NOIP2002 普及组] 选数
#include<bits/stdc++.h>
using namespace std;
int a[5000001];
int r[5000001];
int p;
// 判断是否是素数
int ifPrime(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }
    else if(n%2 == 0)
    {
        return 0;
    }
    else
    {
        for (int i = 3; i < n-2; i+=2)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
}
void compute(int n,int k,int c,int i=0,int s=0)
{
    
    if(c==k)
    {
        r[p] = s;
        p++;
    }
    else if (i == n)
    {
        return ;
    }
    
    else
    {
        compute(n,k,c+1,i+1,s+a[i]);
        compute(n,k,c,i+1,s);
    }
}
int main()
{
    int n,k,count=0;
    scanf("%d%d",&n,&k);
    for(int i = 0; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }
    compute(n,k,0,0,0);
    for (int i = 0; i < p; i++)
    {
        if(ifPrime(r[i])==1)
        {
            count++;
        }
    }
    cout<<count;
    
    

}