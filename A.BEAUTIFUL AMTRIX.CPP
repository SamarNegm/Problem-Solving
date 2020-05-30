#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int x,raw,coulm,place;
  for(int i=1;i<=5;i++)
  {
      for(int j=1;j<=5;j++)
      {
          cin>>x;
          if(x==1)
          {
              raw=i;
              coulm=j;
          }
      }

      cout<<endl;
  }
  place=abs(raw-3)+abs(coulm-3);
  cout<<place;

    return 0;
}
