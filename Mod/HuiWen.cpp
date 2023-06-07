#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[50];
    scanf("%s",&a);
    int i;
    int j;
    while (a[j]!='\0')
    {
        j++;
    }
    j-=1;
    int len = j-i+1;
    int flag = 0;
    if(len%2 == 0)
    {
        for (int i = 0; i < len/2; i++)
        {
            if(a[i] != a[j-i])
            {
                flag = 1;
                break;
            }
        }
    }
    else
    {
        for (int i = 0; i < len/2; i++)
        {
            if(a[i] != a[j-i])
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    
}