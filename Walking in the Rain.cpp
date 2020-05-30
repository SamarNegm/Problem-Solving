
#include<iostream>
using namespace std;
int main()
{
  int n,mi=1e9,d=0;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  for(int i=0;i<n-1;i++)
  {
      int x=max(a[i],a[i+1]);

          if(mi>x)
            mi=x;

  }
  cout<<(min(a[0],min(mi,a[n-1])));







    return 0;
}
