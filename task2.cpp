#include<iostream>
#include<string.h>
using namespace std;
class sample
{
private:
    string s;
public:
    sample(string a)
    {
        s=a;
    }
    string get_s()
    {
        return s;
    }
};
string add_string(sample b,sample c)
{
    return b.get_s()+" "+c.get_s();
}
int main()
{
    sample b("Hey"),c("guys!");
    cout<<"Final string="<<add_string(b,c)<<endl;
    return 0;
}
