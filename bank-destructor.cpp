#include<iostream>
using namespace std;
class Bankaccount
{
private:
    int accountNumber;
    double balance;
public:
    Bankaccount(int acc,double bal)
    {
        accountNumber=acc;
        balance=bal;
        cout<<"Account created!"<<endl;
    }
    ~Bankaccount()
    {
        cout<<"Account closed!"<<endl;
    }
};
int main()
{
    Bankaccount obj(12345,5000);
    return 0;
}
