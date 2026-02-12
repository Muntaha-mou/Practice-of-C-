#include<iostream>
using namespace std;
class varsity
{
private:
    string name;
protected:
    string location;
public:
    varsity()
    {
      name="Bubt";
      location="Rupnagar";
    }
    friend class department;
};
class department
{
   public:
       void Print(varsity v)
       {
           cout<<"Varsity Name="<<v.name<<endl;
           cout<<"Location="<<v.location<<endl;
       }

};
int main()
{
    varsity v;
    department d;
    d.Print(v);
    return 0;
}
