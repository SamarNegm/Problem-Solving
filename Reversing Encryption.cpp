#include<bits/stdc++.h>
using namespace std;
vector<int>v;
string rev(string s,int a)
{
    string news="";
    for(int j=0,i=a-1;i>=0;i--,j++)
        news+=s[i];
    for(int i=a;i<s.length();i++)
        news+=s[i];
    return news;
}
vector< int > divs ;
void genDivs( int n ){

    for( int i = 1 ; i * i <= n ; ++i ){
        if( n % i == 0 ){
            divs.push_back( i ) ;
            if( n / i != i )
                divs.push_back( n / i ) ;
        }
    }
}
int main()
{
    int x,a;

    string s,z;
    cin>>x>>s;
    genDivs( x )
;
sort(divs.begin(),divs.end());
   for(int i=0;i<divs.size();i++)
    {
       s = rev( s,divs[i]);
    }
    cout<<s;
    return 0;
}
