#include<iostream>
#include<string.h>
using namespace std;
class vehicle
{
private:
    int speed;
public:
    vehicle(int s)
    {
        speed=s;
    }
    int getSpeed()
    {
        return speed;
    }
};
int main()
{
    vehicle obj(245);
    vehicle *pt;
    pt=&obj;
    cout<<"Vehicle speed="<<pt->getSpeed()<<endl;
    return 0;
}

