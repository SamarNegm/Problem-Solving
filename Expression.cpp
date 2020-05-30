#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
   int a1=max((a+b)*c,(a*b)+c);
   int a2=max((b+c)*a,(b*c)+a);
  // int a3=max((a+c)*b,(a*c)+b);
   int a4=a*b*c;
   int a5=a+b+c;

    cout<<max(max(max(a4,a5),a2),a1);
    return 0;
}
