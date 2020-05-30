#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long x[n];
    for(long long i=0;i<n;i++)
    {
        cin>>x[i];
    }
    cout<<x[1]-x[0]<<" "<<-x[0]+x[n-1]<<endl;
  for(long long i=1;i<n;i++)
  {
      cout<<min(-x[i]+x[i+1],x[i]-x[i-1])<<" "<<max(x[n-1]-x[i],x[i]-x[0])<<endl;
  }

    return 0;
}
