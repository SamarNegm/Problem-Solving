#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int x;
  cin>>x;
  for(int i=0;i<sqrt(x);i++)
  {
      if(x%i==0)
      {
          cout<<"not prim";
      }
  }










    return 0;
}
