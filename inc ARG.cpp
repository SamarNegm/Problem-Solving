#include<iostream>
using namespace std;
int main()
{
  string s;
  int n,sum=0;
  cin>>n;
  cin>>s;
  for(int i=0;i<n;i++)
  {
      if(s.at(i)=='0')
      {
          sum++;
          break;
      }
      else if(s.at(i)=='1')
      {
          sum++;
      }
  }
  cout<<sum;





    return 0;
}
