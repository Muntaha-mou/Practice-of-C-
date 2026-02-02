#include<iostream>
#include<string.h>
using namespace std;
struct employee
{
    string id;
    string name;
    int basic_salary,DA,HRA,gross_salary;
    int calculate()
    {
        return basic_salary+DA+HRA;
    }

};
int main()
{
struct employee ob;
ob.id="245";
ob.name="Jim";
ob.basic_salary=50;
ob.DA=10;
ob.HRA=20;
cout<<"Id="<<ob.id<<endl<<"Name="<<ob.name<<endl;
cout<<"Basic_salary="<<ob.basic_salary<<endl<<"DA="<<ob.DA<<endl<<"HRA="<<ob.HRA<<endl;
cout<<"Gross_salary="<<ob.calculate()<<endl;
return 0;
}

