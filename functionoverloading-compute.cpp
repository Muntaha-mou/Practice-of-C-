#include<bits/stdc++.h>
using namespace std;
int compute(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int compute(int a,int b,int c)
{
    int min=a;
    if(b<min)
    {
        min=b;
    }
    if(c<min)
    {
        min=c;
    }

        return min;
}
double compute(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    return (double)sum/size;
}
int main()
{
cout<<"Maximum="<<compute(3,2)<<endl;
cout<<"Minimum="<<compute(2,3,4)<<endl;
int arr[]={10,20,30,40,50};
int size=5;
cout<<"Average of array="<<compute(arr,size)<<endl;
return 0;
}
