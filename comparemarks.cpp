#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int marks;
public:
    student(string n,int m)
    {
        name=n;
        marks=m;
    }
    friend void findtopper(student s1,student s2);
};
void findtopper(student s1,student s2)
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
        cout<<"Both students have equal marks."<<endl;
    }
}
int main()
{
    student s1("Mili",85);
    student s2("Tina",90);
    findtopper(s1,s2);
    return 0;

}
