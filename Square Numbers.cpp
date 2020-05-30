#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b;
 while(cin>>a>>b)
 {
     if(a>0&&b>0){
     int ans=0;
int      a1=sqrt(a);
    if(a1*a1<a)
    {
        a1++;

    }
     for(int j=a1;j<=sqrt(b);j++)
     {
         if((j*j)<=b){
            ans++;
       //  cout<<j<<" "<<j*j<<endl;
         }
     }

     cout<<ans<<endl;
     }
 }

    return 0;
}
