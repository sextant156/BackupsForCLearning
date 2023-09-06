#include<bits/stdc++.h>
using namespace std;
class Shape
{
private:
    /* data */
public:
    Shape();
    ~Shape();
    double getArea(double r)
    {
        cout<<"Area of Circle:"<<3.14*r*r<<endl;
        return 3.14*r*r;
    }
    double getArea(double l,double w)
    {
        cout<<"Area of Rectangle:"<<l*w<<endl;
        return l*w;
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
    double getArea()
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
    double getArea()
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
    FILE *fp;
    FILE *fp2;
    fp = fopen("rectangle_info.txt","r");
    fp2 = fopen("rectangle_area.txt","w");
    if(fp == NULL)
    {
        printf("File open error!\n");
        exit(0);
    }
    if(fp2 == NULL)
    {
        printf("File open error!\n");
        exit(0);
    }
    double l;
    double w;
    for (int i = 0; i < 3; i++)
    {
        fscanf(fp,"%lf%lf",&l,&w);
        Rectangle r(l,w);
        double res = r.getArea();
        fprintf(fp2,"%.1lf %.2lf %.2lf\n",l,w,res);
    }
    
}