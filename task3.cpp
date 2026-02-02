#include<iostream>
#include<string.h>
using namespace std;
class box
{
private:
    double length,width,height;
public:
    box(double l,double w,double h)
    {
        length=l;
        width=w;
        height=h;
    }
    double volume()
    {
        return length*width*height;
    }
    void display()
    {
        cout<<"Length="<<length<<endl;
        cout<<"Width="<<width<<endl;
        cout<<"Height="<<height<<endl;
    }
};
double volumeByvalue(box b)
{
    cout<<"Volume="<<b.volume()<<endl;
}
int main()
{
    box b(7,4,3);
    b.display();
    volumeByvalue(b);
    return 0;
}

