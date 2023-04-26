#include<bits/stdc++.h>
using namespace std;
long long f[1000003];
long long n;
long long a,b;
long long f1[1000003],f2[1000003];
long long res;
long long Mod=1e9+7;
bool flag=1;
long long quickPower(long long a, long long b)
{
	long long ans = 1, base = a;
	while(b > 0)
    {
		if(b & 1)
			ans = ans * base%Mod;
		
        base = base*base%Mod;
		b >>= 1;
	}
	return ans;
}
long long find(long long k)
{
    if(f[k]==k)
    {
        return k;
    }
    return f[k]=find(f[k]);
}
int main()
{
    cin>>n;
    for(int i=0;i<=n+1;i++)
    {
        f[i]=i;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        if(f[a]==0&&f[b]==1)
        {
            cout<<0;
            flag=0;
            break;
        }
        else if(f[b]==0&&f[a]==1)
        {
            cout<<0;
            flag=0;
            break;
        }
        else
        {
            if(f[a]==0 || f[a]==1)
            {
                f[find(b)]=find(a);
            }
            else if(f[b]==0 || f[b]==1)
            {
                f[find(a)]=find(b);
            }
            else
            {
                f[find(a)]=find(b);
            }
        }
    }
    for(int i=0;i<=n+1;i++)
    {
        f1[f[i]]++;
    }
    for(int i=0;i<=n+1;i++)
    {
        if(f1[i])
        {
            res++;
        }
    }
    res=res-2;
    if(flag==1)
    {
        cout<<quickPower(2,res);
    }
    
}