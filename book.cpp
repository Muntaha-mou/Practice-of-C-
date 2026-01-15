#include<iostream>
#include<string.h>
using namespace std;
class book
{
private:
    string title,author;
    int year;
public:
    void setinfo(string t,string a,int y)
    {
        title=t;
        author=a;
        year=y;
    }
    void display()
    {
        cout<<"Title="<<title<<endl;
        cout<<"Author="<<author<<endl;
        cout<<"Year="<<year<<endl;
    }
};
int main()
{
    book obj;
    obj.setinfo("Something","Najrul",2004);
    obj.display();
    return 0;
}
