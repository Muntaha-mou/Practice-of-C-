#include<iostream>
#include<string.h>
using namespace std;
class product
{
private:
    string productName;
    string productId;
    string price;
public:
    product()
    {
        productName="unnamed";
        productId="0";
        price="0.0";
    }
    product(string name,string id,string p)
    {
        productName=name;
        productId=id;
        price=p;
    }
    ~product()
    {
        cout<<"Object is destroyed!"<<endl;
    }
    void displayDetails()
    {
        cout<<"Product Name="<<productName<<endl;
        cout<<"Product Id="<<productId<<endl;
        cout<<"Price="<<price<<endl;
    }
};
int main()
{
    product obj;
    obj.displayDetails();
    product objt("Icecream","245","100");
    objt.displayDetails();
    return 0;
}
