#include<iostream>
using namespace std;
class rectangle
{
private:
    double length,width;
public:
    void setvalues(double l,double w)
    {
        length=l;
        width=w;

    }
    double area()
    {
        return length*width;
    }
    double perimeter()
    {
        return 2*(length+width);
    }
};
int main()
{
    rectangle obj;
    obj.setvalues(2,3);
    cout<<"Area="<<obj.area()<<endl;
    cout<<"Perimeter="<<obj.perimeter();
    return 0;
}
