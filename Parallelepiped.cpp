#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int a=1,b=1,c=1,x,y,z;
  cin>>x>>y>>z;
  b=sqrt(z*y/x);
  a=y/b;
  c=x/a;
  cout<<4*a+4*b+4*c;



    return 0;
}
