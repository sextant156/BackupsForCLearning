#include<bits/stdc++.h>
using namespace std;
// 计算阶乘
double f1(int x)
{
    if (x==1 || x==0)
    {
        return 1;
    }
    else
    {
        return x*f1(x-1);
    }
}
// 计算次方
double pow(double x,int t)
{
    double res = 1;
    while (t)
    {
        res *= x;
        t--;
    }
    return res;
    
}
// 计算组合数
int CNM(int n,int m)
{
    return f1(n)/(f1(m)*f1(n-m));
}
// 计算指数贝尔多项式
int compute_exponential_bell_polynomial(int n,int k,int* x)
{
    // 已知 B00 = 1
    if(n == 0 && k == 0)
    {
        return 1;
    }
    // 已知 B0k = 0
    // 已知 Bn0 = 0
    else if (n == 0 || k == 0)
    {
        return 0;
    }
    int result = 0;
    // 由递归法计算Bnk
    for (int i = 1; i <= n-k+1; i++)
    {
        result += CNM(n-1,i-1)*x[i]*compute_exponential_bell_polynomial(n-i,k-1,x);
    }
    return result; 
}
// 指数贝尔多项式
class Bell
{
protected:
    int n;
    int k;
    int x[1001];
public:
    friend int compute_exponential_bell_polynomial(int n,int k,int* x);
    Bell(int n,int k) : n(n),k(k)
    {
        // 构造指数贝尔多项式
        cout<<"Exponential_Bell_Polynomial has been constructed"<<endl;
    }
    ~Bell()
    {   
        // 析构指数贝尔多项式
        cout<<"Exponential_Bell_Polynomial has been destroyed"<<endl;
    }
    void InputX()
    {
        for (int i = 1; i <= n-k+1; i++)
        {
            scanf("%d",&x[i]);
        }
    }
    int ComputeValue()
    {
        cout<<"Value of B"<<n<<k<<":"<<endl;
        cout<<compute_exponential_bell_polynomial(n,k,x)<<endl;
    }    
};
int compute_completed_bell_polynomial(int n,int* x)
{
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        result += compute_exponential_bell_polynomial(n,i,x);
    }
    return result;    
}
class CompletedBell
{
protected:
    int n;
    int x[1001];
public:
    friend int compute_completed_bell_polynomial(int n,int* x);
    CompletedBell(int n) : n(n)
    {
        // 构造完全贝尔多项式
        cout<<"Completed_Bell_Polynomial has been constructed"<<endl;
    }
    ~CompletedBell()
    {
        // 析构完全贝尔多项式
        cout<<"Completed_Bell_Polynomial has been destroyed"<<endl;
    }
    // 输入每个x的值
    void InputX()
    {
        for (int i = 1; i <= n; i++)
        {
            scanf("%d",&x[i]);
        }
    }
    // 计算贝尔多项式的值
    int ComputeValue()
    {
        cout<<"Value of B"<<n<<":"<<endl;
        cout<<compute_completed_bell_polynomial(n,x)<<endl;
    }
};
int main()
{
    int n;
    // 输入n
    cout<<"Input n:"<<endl;
    scanf("%d",&n);
    int k;
    // 输入k，作样例输出
    cout<<"Input k:"<<endl;
    scanf("%d",&k);
    // 构建指数贝尔多项式，作样例输出
    Bell bell(n,k);
    // 输入x
    bell.InputX();
    // 计算指数贝尔多项式的值
    bell.ComputeValue();
    // 构建完全贝尔多项式，作样例输出
    CompletedBell completed_bell(n);
    // 输入x
    completed_bell.InputX();
    // 计算完全贝尔多项式的值
    completed_bell.ComputeValue();
    return 0;
}