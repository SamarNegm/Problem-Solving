#include<iostream>
using namespace std;
long long ans;
long long rev(int a)
{
    if(!a)
    {

        return ans;
    }
 ans=ans*10+a%10;
   return    rev(a/10);
}
int main()
{
long long a;
    while( cin>>a)
    {
        ans=0;
       cout<< rev(a)<<"\n";
    }

    return 0;
}
