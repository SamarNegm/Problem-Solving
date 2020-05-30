#include<stdio.h>
#include<string>
#include<iostream>
using namespace std ;
long long power(long long x  ){
    long long p = 1 ;
for(int i = 1 ; i <= x ; i++  )
    p*= 2 ;
return p ;
}
int main()
{
    long long  x  , y , ans = 0   ;
    scanf( "%lld%lld" , &x , &y ) ;
    long long m = x ;
string b  = "" ;
std::cout<<x<<" "<<y<<endl;
while( x ){
    if(x%2)
     b += "1" ;
     else
     b+= "0" ;
     x/=2 ;
}
std::cout<<x<<" "<<" "<<b<<" "<<y<<endl;
if(y == 1 ){
   printf("%lld" , m );
}
else {
    for(int i = 0 ; i < b.length()  ; i++ ){

            ans += power(i) ;
            cout<<ans<<endl;
    }
    printf("%lld" , ans );
}}
