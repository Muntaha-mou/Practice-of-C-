#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
int main()
{
    int n,sum=0;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Fibonacci series: ";
    for(int i=0;i<n;i++)
    {
        int fibo=fib(i);
        cout<<fibo<<" ";
        sum+=fibo;
    }
    cout<<endl;
    cout<<"Sum of series= "<<sum;
    return 0;


}
