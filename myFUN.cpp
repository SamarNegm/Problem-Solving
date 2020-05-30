#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long vst [ 500005 ],ans,a[505][505],x,y,mr,mi,mk,mj;
vector<long long>vp,mp;
void seiv()
{

    for( long long i = 2,k=0 ; i <=200005; ++i )
    {
        if( vst[ i ] )
        {
            continue ;
        }
        vp.push_back(i);
        //     cout <<i<<" "<<j++<<endl;
        for( ll j = 1LL * i *i; j <=200005; j += i )
            vst[ j ] ++;
    }
}


////////////***********************
   vector< long long > divs ;
   long long d[1000000];
long long genDivs( long long n ){
long long x=0;
    for( long long  i = 1 ; i * i <= n ; ++i ){
        if( n % i == 0 ){
           x++;
            if( n / i != i )
                x++;
        }
    }
    return x;
}
////*****************************
bool is_prime(int a)
{
    int c=0;
    for(int i=0; vp[i]<a; i++)
    {
        if(a%vp[i]==0)
        c++;
        if(c>2)
            return false;

    }
    return c==2;
}


/////**********************************

bool is_sub(string s1,string s2)
{
    for(int i=0;i<s1.length();i++)
    {
        int j=0;
        for(int k=i;j<s2.length();j++,k++)
        {
            if(s1[k]!=s2[j]){
                    j--;
            break;
            }


        }
        if(j==s2.length())
            return true;

}


int main()
{







    return 0;
}


