// Did you think there was going to be a JoJo legend here? But no, that was me, Dio!

// Given a binary string s
// of length n, consisting of characters 0 and 1. Let's build a square table of size n×n

// , consisting of 0 and 1 characters as follows.

// In the first row of the table write the original string s
// . In the second row of the table write cyclic shift of the string s by one to the right. In the third row of the table, write the cyclic shift of line s by two to the right. And so on. Thus, the row with number k will contain a cyclic shift of string s by k to the right. The rows are numbered from 0 to n−1

// top-to-bottom.

// In the resulting table we need to find the rectangle consisting only of ones that has the largest area.

// We call a rectangle the set of all cells (i,j)
// in the table, such that x1≤i≤x2 and y1≤j≤y2 for some integers 0≤x1≤x2<n and 0≤y1≤y2<n

// .

// Recall that the cyclic shift of string s
// by k to the right is the string sn−k+1…sns1s2…sn−k. For example, the cyclic shift of the string "01011" by 0 to the right is the string itself "01011", its cyclic shift by 3

// to the right is the string "01101".
// Input

// Each test consists of multiple test cases. The first line contains a single integer t
// (1≤t≤2⋅104

// ) — the number of test cases. The description of test cases follows.

// The first and the only line of each test case contains a single binary string s
// (1≤|s|≤2⋅105

// ), consisting of characters 0 and 1.

// It is guaranteed that the sum of string lengths |s|
// over all test cases does not exceed 2⋅105

// .
// Output

// For each test case, output a single integer — the maximum area of a rectangle consisting only of ones. If there is no such rectangle, output 0
// .
// Example
// Input
// Copy

// 5
// 0
// 1
// 101
// 011110
// 101010

// Output
// Copy

// 0
// 1
// 2
// 6
// 1
// write code to finish the problem above   
// the code above is wrong,try to create a new one  
// write code to finish the problem above
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        int a[n];
        for(int i=0;i<n;i++)
        {
            a[i]=s[i]-'0';
        }
        int b[n];
        for(int i=0;i<n;i++)
        {
            b[i]=a[i];
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[j]==1)
                {
                    b[j]=b[j]+a[(j+1)%n];
                }
                else
                {
                    b[j]=0;
                }
            }
            for(int j=0;j<n;j++)
            {
                a[j]=b[j];
            }
        }
        int max=0;
        for(int i=0;i<n;i++)
        {
            if(max<b[i])
            {
                max=b[i];
            }
        }
        cout<<max<<endl;
    }
}




