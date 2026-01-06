#include<iostream>
#include<string.h>
using namespace std;
class car
{
public:
    string brand;
    string model;
    int year;
    void displayinfo()
    {
        cout<<"Brand: "<<brand<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Year: "<<year<<endl;
    }

};
int main()
{
    car mycar;
    mycar.brand="Toyota";
    mycar.model="Corolla";
    mycar.year=2022;
    mycar.displayinfo();
    return 0;
}
