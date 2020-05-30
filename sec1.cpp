#include <iostream>
#include <stdio.h>
using namespace std;

bool rev ( int n ){
    int orig = n , rev = 0 ;
    while ( n ){
        rev = ( rev * 10 ) + n % 10 ;
        n /= 10 ;
    }
    return rev == orig ;
}
int sumDigit ( int n ){
    int ret = 0 ;
    while ( n ){
        ret += n % 10 ;
        n /= 10 ;
    }
    return ret ;
}
bool isPrime ( int n ){
    for ( int i = 2 ; i * i <= n ; ++i )
        if ( n % i == 0 )
            return false ;
    return n > 1 ;
}
int main(){
    if ( int x = 1 ){
        if ( cin >> x ){
            while ( x-- )
            if ( cout << "amr\n" ) {}
        }
    }
}

