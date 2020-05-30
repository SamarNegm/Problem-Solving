
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

#define ll long long
long long vst [ 20000005 ];
vector<long long>vp;
void seiv(){
    for( long long i = 2 ; i <= 2000005; ++i ){
         if( vst[ i ] )
            continue ;
            vp.push_back(i*i);
      //  cout<<i*i<<endl;
        for( ll j = 1LL * i * i ; j <= 2000005; j += i )
            vst[ j ] = 1 ;
    }
}
int main()
{
  int  x;
     seiv();

    cin>>x;


   while(x--)
    {
      long long  a;
        cin>>a;
int w=lower_bound(vp.begin(),vp.end(),a)-vp.begin();
//cout<<vp[w]<<endl;
        if(vp[w]==a){

            cout<<"YES\n";

        }
        else
            cout<<"NO\n";
    }



}
