#include<iostream>
#include<cmath>
using namespace std ;
int main()
{
    long long  x  , y , ans = 0 , cont = 0  ;
    cin >> x >> y ;
while(x > 0 ){
x/=2 ;
cont++ ;
cout<<" con "<<cont<<endl;
}

for(int i = cont-1 ; i >= 0  ; i--){
    ans += pow(2 , i) ;
    y--;
    if (y == 0 )
        break ;
}
cout << ans <<endl;
}
