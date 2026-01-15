#include<iostream>
using namespace std;
class circle
{
private:
    double radius;
public:
    void setvalue(double r)
    {
        radius=r;
        cout<<"Radius="<<radius<<endl;
    }
    double area()
    {
       return 3.1416*radius*radius;
    }
    double circumference()
    {
        return 2*3.1416*radius;
    }
};
int main()
{
    circle obj;
    obj.setvalue(5);
    cout<<"Area="<<obj.area()<<endl;
    cout<<"Circumference="<<obj.circumference();
    return 0;
}
