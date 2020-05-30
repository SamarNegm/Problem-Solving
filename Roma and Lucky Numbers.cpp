#include<iostream>
#include<string>
using namespace std;
int main()
{
  int n,k,cont=0,t=0;
  string a;

  cin>>n>>k;
  for(int i=0;i<n;i++)
  {
      cont =0;
      cin>>a;
      for(int j=0;j<a.length();j++){
      if(a.at(j)=='4'||a.at(j)=='7')
        cont++;

      }
      if (cont<=k)
        t++;
  }

    cout<<t;
    return 0;
}
