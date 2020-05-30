#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,a,b,c,z,sum=0,z1,z2;
    cin>>n>>a>>b>>c;
      z=min(min(a,b),c);
        z1=min(b,max(z,a));
        z2=max(a,max(c,b));
    for(;n>0;)
    {
        if((n%z==0)||n-z==a||n-z==b||n-z==c)
        {
            n-=z;
            sum++;
        }
      else   if((n%z1)==0||n-z1==a||n-z1==b||n-z1==c)
        {
            n-=z1;
            sum++;
        }
       else  if(n%z2==0||n-z2==a||n-z2==b||n-z2==c)
        {
            n-=z2;
            sum++;
        }
        else if (n==a||n==b||n==c)
        {
            sum++;
            n=0;
            break;
        }


    }
    cout<<sum;

}
