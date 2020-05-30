#include <bits/stdc++.h>
using namespace std;
int fr[ 3 ] ;
int main()
{
    string s ;
    for( int i = 0 ; i < 3 ; ++i ){
        cin >> s ;
        if( s[ 1 ] == '>' )
            ++fr[ s[ 0 ] - 'A' ] ;
        else
            ++fr[ s[ 2 ] - 'A' ] ;
    }
    if( fr[ 0 ] == fr[ 1 ] && fr[ 1 ] == fr[ 2 ] )
        cout << "Impossible" ;
    else
    for( int i = 0 ; i < 3 ; ++i )
        for( int j = 0 ; j < 3 ; ++j )
            if( fr[ j ] == i )
                cout << char( j + 'A' ) ;
}
