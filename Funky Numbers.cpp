#include<iostream>
#include <cmath>
using namespace std;
bool isBta3(int x)
{
    for(long long i=1;i<=sqrt(x)*2;i++)
    {
        if((i*(i+1))/2==x)
        {
           cout<<i<<" "<<x<< "  el mo ";

            return true;
        }
    }
    return false;
}
int main()
{
    long long y;
  cin>>y;

    for(long long i=(sqrt(y)*2);i>0;i--)
    {
        if((i*(i-1))/2>y)
         continue;
        else
        {
            if(isBta3(y-(i*(i+1))/2))
            {
                cout<<i<<" "<<y-(i*(i-1))/2;
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";





    return 0;
}
