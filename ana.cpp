#include<iostream>
#include<cmath>
using namespace std;
long long pw(long long x)
{
    long long res=1;
    while(x)
    {
       res*=2;
       x--;
    }

    return res;
}
int main()
{

    long long a,b,cont=0;
    cin>>a>>b;
    long long c=a;
    while(a )
    {
        cont++;
        a/=2;
    }
    if(b==1)
        cout<<c;
    else
        cout<<pw(cont)-1;


    return 0;
}
