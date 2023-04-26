//kmp算法
#include<bits/stdc++.h>
using namespace std;
int Next[10001];//next数组意味着子串中可以跳过的字符的个数
string s1,s2;
int kmp_search(string s1,string s2)
{
    int i,j;
    while(i<s1.length())
    {
        //此处求取主串长度也可以用.size()
        if(s1[i]==s2[j])
        {
            i++;//主串中的指针
            j++;//子串中的指针
        }
        else if(j>0)
        {
            j=Next[j-1];
        }
        else
        {
            i++;

        }
        if(j==s2.size())
        {
            int ans=i-j;
            return ans;
        }

    }
}
int build_next(string s)
{
    //计算next数组
    int prefix_len;//当前共同前后缀的长度
    int i=1;
    while (i<s.size())
    {
        if(s[prefix_len]==s[i])
        {
            prefix_len++;
            Next[i]=prefix_len;
            i+=1;
        }
        else
        {
            if(prefix_len==0)
            {
                Next[i]=0;
                i+=1;
            }
            else
            {
                prefix_len=Next[prefix_len-1];
            }
        }
    }
    


}

int main()
{
    cin>>s1>>s2;
    build_next(s2);
    cout<<kmp_search(s1,s2);
    
    
}