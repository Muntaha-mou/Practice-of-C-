#include<iostream>
#include<string.h>
using namespace std;
class animal
{
public:
    string color;
    string sound;
    string name;
    void printinfo()
    {
        cout<<"Color: "<<color<<endl<<"Sound: "<<sound<<endl;
    }
    void showname()
    {
        cout<<"Name: "<<name;
    }


};
int main()
{
    animal myanimal;
    myanimal.name="Cat";
    myanimal.color="White";
    myanimal.sound="Meow";
    myanimal.printinfo();
    myanimal.showname();
    return 0;
}
