#include<bits/stdc++.h>
using namespace std;
class Joseph
{
private:
    
public:
    bool Is_Traversed = 1;
    Joseph()
    {
        Is_Traversed = 0;
        // cout<<Is_Traversed<<endl;
    }
    ~Joseph()
    {

    }
};

int main()
{
    int m,n,k;
    int cnt = 0;
    scanf("%d%d%d",&m,&n,&k);
    Joseph js[m+1];
    js[0].Is_Traversed = 1;
    while (cnt<m)
    {
        int cntd = 0;
        while (cntd<n-1)
        {
            int keynow;
            if(k%m == 0)
            {
                keynow = m;
            }
            else
            {
                keynow = k%m;
            }
            if(js[keynow].Is_Traversed == 0)
            {
                cntd++;
            }
            k++;
        }
        while (1)
        {
            int keynow;
            if(k%m == 0)
            {
                keynow = m;
            }
            else
            {
                keynow = k%m;
            }
            if(js[keynow].Is_Traversed == 0)
            {
                js[keynow].Is_Traversed = 1;
                printf("%d ",keynow);
                cnt++;
                k = (k+1)%m;
                break;
            }
            k++;
        }
        
        
    }
    

}