#include<iostream>
#include<string.h>
using namespace std;
class student
{
private:
    string name;
    double marks;
public:
    student(string n,double m)
    {
        name=n;
        marks=m;
    }
    friend void findTopper(student s1,student s2);

};
void findTopper(student s1,student s2)
{
if(s1.marks>s2.marks)
{
    cout<<"Topper="<<s1.name<<endl;
}
else if(s2.marks>s1.marks)
{
    cout<<"Topper="<<s2.name<<endl;
}
else
{
    cout<<"Both students have equal marks"<<endl;
}
}

int main()
{
    student s1("Mina",245);
    student s2("Tina",246);
    findTopper(s1,s2);
    return 0;
}
