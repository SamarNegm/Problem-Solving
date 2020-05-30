#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std ;
int main(){
int n  ;
cin >> n ;
int a[n] ;
for(int i=0 ; i < n ; i++)
    cin >> a[i] ;

int serja = 0 , Dima = 0 ;

for(int i=0,  k=n-1 , j=0 ; i<n ; i++){
    if(i%2==0){
    serja+= max(a[k],a[j]) ;
     if(max(a[k],a[j])==a[k])
        k-- ;
     else
        j++;
    }
   else{
    Dima+= max(a[k],a[j]) ;
     if(max(a[k],a[j])==a[k])
        k-- ;
     else
        j++;
    }
}

cout<<serja <<" " <<Dima <<endl;

}
