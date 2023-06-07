#include<bits/stdc++.h>
using namespace std;
class Shape
{
private:
    /* data */
public:
    Shape();
    ~Shape();
    void getArea(double r)
    {
        cout<<"Area of Circle:"<<3.14*r*r<<endl;
    }
    void getArea(double l,double w)
    {
        cout<<"Area of Rectangle:"<<l*w<<endl;
    }
};
// 派生，除了私有成员，其他的，如保护和公有成员都会被继承
// 派生类
// 圆形
class Circle : public Shape
{
protected:
    double radius;
public:
    Circle(double r);
    ~Circle();
    void getArea()
    {
        Shape::getArea(radius);
    }
};
// 派生类
// 矩形
class Rectangle : public Shape
{
protected:
    double length;
    double width;
public:
    Rectangle(double l,double w);
    ~Rectangle();
    void getArea()
    {
        Shape::getArea(length,width);
    }
};

Rectangle::Rectangle(double l,double w):length(l),width(w)
{
}

Rectangle::~Rectangle()
{
}

Circle::Circle(double r):radius(r)
{
}

Circle::~Circle()
{
}


Shape::Shape()
{
}

Shape::~Shape()
{

}

int main()
{
    Rectangle r(3,4);
    r.getArea();
    Circle c(5);
    c.getArea();
}