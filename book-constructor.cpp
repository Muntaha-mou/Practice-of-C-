#include<iostream>
#include<string.h>
using namespace std;
class book
{
public:

    string title;
    string author;
    int publication_year;
    book()
    {
        title="unknown";
        author="unnamed";
        publication_year=2004;
        cout<<"Book constructor called!"<<endl;
    }
    ~book()
    {
        cout<<"The object is destroyed"<<endl;
    }
    void display()
    {
        cout<<"Title="<<title<<endl;
        cout<<"Author="<<author<<endl;
        cout<<"Publication year="<<publication_year<<endl;
    }
};
int main()
{
    book obj;
    obj.title="a";
    obj.author="b";
    obj.publication_year=1;
    obj.display();
    return 0;
}
