#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int a,b,c,ma1,ma2;
  cin>>a>>b>>c;
    ma1=((a+b+ fabs(a-b)))/2;
    ma2=((c+ma1+ fabs((c-ma1))))/2;
    cout<<ma2<<" eh o maior"<<endl;
    return 0;
}
