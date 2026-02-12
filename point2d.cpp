#include<bits/stdc++.h>
using namespace std;
class point2d
{
private:
    double x,y;
public:
    point2d(double a,double b)
    {
        x=a;
        y=b;
    }
    void show()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
    friend double calculateDistance(point2d p1,point2d p2);
};
double calculateDistance(point2d p1,point2d p2)
{
    return sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
}
int main()
{
    point2d p1(2,3);
    point2d p2(6,7);
    p1.show();
    p2.show();
    cout<<"Distance="<<calculateDistance(p1,p2)<<endl;
    return 0;
}
