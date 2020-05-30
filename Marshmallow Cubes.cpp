#include<bits/stdc++.h>
using namespace std;
long long pw(long long i){
return i*i*i;
}
int main (){
 int n ,a;
 scanf("%d" , &n ) ;
long long  sum = 0 ;

 for(int i= 0 ; i < n ; i++ ) {
    scanf("%d" , &a ) ;

    sum += pow (a , 3LL ) ;
 }
 long long  i = 1 ;
 for( ; i <=  1e8; i++ ){
    if( pw( i ) > sum  )
        break ;
 }

 printf("%d" , i-1  ) ;

}
