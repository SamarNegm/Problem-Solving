#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <map>
#include <deque>
#include <math.h>
#include <cstring>
#include <string.h>
#include <iomanip>
#include <stdlib.h>
#include <queue>
using namespace std;

const int N = 1e5 + 5 ;
char a[ N ] ;
char b[ N ] ;
int main(){
    scanf( "%s %s" , a , b ) ;
    int size = strlen( b ) ;
    int j = 0 ;
    for( int i = 0 ; a[ i ] ; ++i ){
        if( a[ i ] == b[ j ] )
            ++j ;
    }
    if( j >= size )
        puts( "Yes" ) ;
    else
        puts( "No" ) ;
    return 0 ;
}
