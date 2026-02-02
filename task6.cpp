#include<iostream>
#include<string.h>
using namespace std;
struct student
{
    string name;
    int roll;
    float marks[3];
};
int main()
{
    int n;
    cout<<"Enter number of students:"<<endl;
    cin>>n;
    while (n--)
    {
        student s;
        int sum=0;
        cout<<"Enter Name=";
        cin>>s.name;
        cout<<"Enter Roll=";
        cin>>s.roll;
        cout<<"Enter marks=";
        for(int i=0;i<3;i++)
        {
            cin>>s.marks[i];
            sum+=s.marks[i];
        }
        float avg=sum/3;
        cout<<"Name="<<s.name<<endl;
        cout<<"Roll="<<s.roll<<endl;
        cout<<"Average marks="<<avg<<endl;
    }
    return 0;
}
