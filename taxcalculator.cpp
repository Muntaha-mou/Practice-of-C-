#include<bits/stdc++.h>
using namespace std;
class taxcalculator
{
public:
    double calculatetax(double income)
    {
        return income*0.15;
    }
    double calculatetax(double income ,double taxrate)
    {
        return income*taxrate;
    }

};
int main()
{
    taxcalculator tax;
    double income=50000;
    cout<<"Default tax="<<tax.calculatetax(income)<<endl;
    cout<<"Custom tax="<<tax.calculatetax(income,0.20)<<endl;
    return 0;
}
