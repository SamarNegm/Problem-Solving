#include<iostream>
using namespace std;

int main()
{

    long long n,x,z;
    cin>>x>>z;
    n=z/x;
    long long i;
  i=n;
    while(i*x>=z)
    {
        --i;
    }
    cout<<i;


    return 0;
}
