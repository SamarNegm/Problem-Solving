
#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
    int n , a , b , c ;
    cin >> n >> a >> b >> c ;
    int max = 0 ;
    for ( int i = 0 ; i <= n ; ++i )
        for ( int j = 0 ; j <= n ; ++j ){
            int k = ( n - ( i * a ) - ( j * b ) ) / c ;
            if ( k < 0 )
                continue ;
            int n2 = i * a + j * b + k * c ;
            if ( n == n2 && i + j + k > max )
                max = i + j + k ;
        }
    cout << max ;
}
