#include<iostream>
#include<string.h>
using namespace std;
class student
{
private:
    string name;
    int roll;
    int mark1,mark2,mark3;
public:
    void setvalues(string n,int r,int a,int b, int c)
    {
        name=n;
        roll=r;
        mark1=a;
        mark2=b;
        mark3=c;
    }
    int total()
    {
        return mark1+mark2+mark3;
    }
    int average()
    {
        return (mark1+mark2+mark3)/3;
    }
    void display_info()
    {
        cout<<"Name="<<name<<endl;
        cout<<"Roll="<<roll<<endl;
        cout<<"Total Marks="<<total()<<endl;
        cout<<"Average MarkS="<<average()<<endl;
    }


};
int main()
{
    student obj;
    obj.setvalues("Mili",245,10,20,30);
    obj.display_info();
    return 0;

}
