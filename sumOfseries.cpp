#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter num: ";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"Sum of series="<<sum;
    return 0;

}
