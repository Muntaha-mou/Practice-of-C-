#include<iostream>
#include<string.h>
using namespace std;
class wall
{
private:
    double length;
    double height;
public:
    wall(double l,double h)
    {
        length=l;
        height=h;
    }
    wall(wall const &w)
    {
        length=w.length;
        height=w.height;
    }
    void calculateArea()
    {
        cout<<"Wall area1="<<length*height<<endl;
    }
    void calculateArea2()
    {
        cout<<"Wall area2="<<length*height<<endl;
    }
};
int main()
{
    wall w1(10,20);
    wall w2=w1;
    w1.calculateArea();
    w1.calculateArea2();
    return 0;
}
