#include<bits/stdc++.h>
using namespace std;
class Point 
{   //Point类定义
    public:
        Point(int xx = 0, int yy = 0) 
        {

            x = xx;
            y = yy;
            cout << "Calling constructor of Point" << endl;
            count = count + 1;
        }
        ~Point() 
        {
            cout << "Calling destructor of Point" << endl;
            // count--;
        }
        // static int getCount() 
        // { 
        //     return count; 
        // }
        Point(Point& p);
        int getX() { return x; }
        int getY() { return y; }
    private:
        int x, y;
        static int count;
};
Point::Point(Point& p) 
{
    //复制构造函数的实现
    x = p.x;
    y = p.y;
    cout << "Calling the copy constructor of Point" << endl;
}
class Line 
{
    //Line类的定义
    public://外部接口
        Line(Point xp1, Point xp2)
        {
            p1 = xp1;
            p2 = xp2;
            cout << "Calling constructor of Line" << endl;
        };
        Line(Line& l)
        {
            p1 = l.p1;
            p2 = l.p2;
            cout << "Calling the copy constructor of Line" << endl;
        };
        double getLen() { return len; }
    private://私有数据成员
        Point p1, p2;//Point类的对象p1,p2
        double len;
};
int Point::count = 0;
int main() 
{
    
    // Point myp1(1, 1), myp2(4, 5);//建立Point类的对象
    // Line line(myp1, myp2);//建立Line类的对象
    // Line line2(line);//利用复制构造函数建立一个新对象
    // cout << "The length of the line is: ";
    // cout << line.getLen() << endl;
    // cout << "The length of the line2 is: ";
    // cout << line2.getLen() << endl;
    Point myp1(1,2);
    cout<<myp1.getX();
    cout<<myp1.getY();
    // Point::getCount();
    return 0;
}
