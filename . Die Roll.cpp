#include<iostream>
using namespace std;
int main()
{
    int a,b,sum=0,gcd;
    cin>>a>>b;
    for(int i=max(a,b);i<=6;i++)
    {
        sum++;
    }
    //cout<<sum<<endl;
    for(int i=1;i<=6;i++)
    {
        if(sum%i==0&&6%i==0)
             gcd=i;
    }
 //   cout<<gcd<<endl;
    cout<<sum/gcd<<"/"<<6/gcd;




    return 0;
}
