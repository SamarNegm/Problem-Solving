#include<iostream>
#include<cmath>
#include<math.h>
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
    cout<<(long long)sqrt(pow(x[0]-x[1],2))<<" "<<(long long)sqrt(pow(x[0]-x[n-1],2))<<endl;
  for(long long i=1;i<n;i++)
  {
      cout<<min((long long)sqrt(pow(x[i]-x[i+1],2)),(long long)sqrt(pow(x[i]-x[i-1],2)))<<" "<<max((long long)sqrt(pow(x[n-1]-x[i],2)),(long long)sqrt(pow(x[0]-x[i],2)))<<endl;//cout<<n-1-i<<endl;
  }

    return 0;
}
