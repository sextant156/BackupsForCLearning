#include<bits/stdc++.h>
using namespace std;
class A
{
private:
    /* data */
public:
    int a = 0;
    A(int a1)
    {
        a = a1;
    }
    ~A()
    {
        
    }
};
class B : public A
{
private:
    /* data */
public:
    B(int a1) : A(a1)
    {
        
    }
    ~B()
    {

    }
    void prt()
    {
        cout<<A::a;
    }
};

int main()
{
    B b(5);
    b.prt();
}


