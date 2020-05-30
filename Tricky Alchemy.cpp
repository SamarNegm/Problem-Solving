
#include<iostream>
#include<cmath>
using namespace std;
int main()
{

    long long A,B,x,y,z,ans1=0,ans2=0;
    cin>>A>>B;
    cin>>x>>y>>z;
    long long Y=x*2+y;
    if(Y>A)
    ans1=Y-A;
    else ans1=0;

    long long b=y+3*z;
    if(b>B)
    ans2=b-B;
    else ans2=0;

    cout<<ans1+ans2;


}
