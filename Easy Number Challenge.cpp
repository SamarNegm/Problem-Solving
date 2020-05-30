#include<bits/stdc++.h>
using namespace std;
   vector< long long > divs ;
   long long d[1000000];
long long genDivs( long long n ){
long long x=0;
    for( long long  i = 1 ; i * i <= n ; ++i ){
        if( n % i == 0 ){
           x++;
            if( n / i != i )
                x++;
        }
    }
    return x;
}
int main()
{
    long long  x,y,z,ans=0,n;
    cin>>x>>y>>z;
    for(long long i=1;i<=x;i++)
        for(long long j=1;j<=y;j++)
    for(long long k=1;k<=z;k++){
        if(d[i*j*k]==0){
       n=genDivs(i*j*k);
d[i*j*k]=n;
    ans=ans+n;
        }
        else
        {
            ans=ans+d[i*j*k];
        }


    }
    cout<<ans;

    return 0;
}
