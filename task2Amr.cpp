#include<iostream>
using namespace std;
long long sum=0;
long long fun(long long x)
{
    if(x==0){
   cout<<" sum is "<<sum<<endl;;
        return sum;
    }
    else if(x%3!=0)
        fun(x-1);
    if(x%3==0)
    {
        sum+=x;
        fun(x-3);
    }

}
int main()
{
long long x=11;
    long long ans=fun(x);
    cout<<ans;
  return 0;
}
