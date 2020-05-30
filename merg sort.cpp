#include <bits/stdc++.h>
using namespace std;
//count sort
const int N = 1e7 + 5 ;
int fr[ N ] ;
int main() {
	int n , t ;
	scanf( "%d" , &n ) ;
	for( int i = 0 ; i < n ; ++i ){
		scanf( "%d" , &t ) ;
		++fr[ t ] ;
	}
	vector< int > sortedArray ;
	cout<<N<<"  N"<<endl;
	for( int i = 0 ; i < N ; ++i )
		while( fr[ i ]-- )
			sortedArray.push_back( i ) ;
	for( int i = 0 ; i < n ; ++i ){
		printf( "%d " , sortedArray[ i ] ) ;
	}
	return 0;
}
