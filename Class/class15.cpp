#include<bits/stdc++.h>
using namespace std;
class A
{
private:
    int Z
public:
    A(int Z) : Z(Z)
    {
    }
    ~A();
};

A::A(/* args */)
{
}

A::~A()
{
}
class B : public A
{
private:
    int a;
    A Z;
public:
    B()
    {
        a = 0;
    }
    B(int i,int j) : A(i),Z(i)
    {
        a = i;
    }
    ~B();
};

B::B(/* args */)
{
}

B::B(int a1)
{
}

B::~B()
{
}

int main()
{

}