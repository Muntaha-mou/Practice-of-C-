#include<iostream>
#include<string.h>
using namespace std;
class point
{
private:
    int x;
    int y;
public:
    point(int a,int b)
    {
        x=a;
        y=b;
    }
    point(point const &p1)
    {
        x=p1.x;
        y=p1.y;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
};
int main()
{
  point p1(10,20);
  point p2=p1;
  cout<<p1.getx()<<" "<<p1.gety()<<endl;
  cout<<p2.getx()<<" "<<p2.gety()<<endl;
  return 0;

}
