#include<iostream>
#include<string>
using namespace std;
int main()
{
  int x=97,a,b;
  cin>>a>>b;
  char pas[a];

  for(int i=0;i<b;i++,x++ )
  {pas[i]=(char)x;
  cout<<pas[i];
  }
  int k=0;
  for(int j=b;j<a;j++)
  {
    cout<<pas[k];
    k++;
    if(k>b-1)
        k=0;
  }
    return 0;
}
