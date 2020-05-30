#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long
long long vst [ 30000005 ],ans,x,j=2,ap[100000000];

vector<long long>vp;

void seiv()
{
    for( long long i = 2,k=0 ; i <=1005; ++i )
    {
        if( vst[ i ] )
        {
            continue ;
        }
        vp.push_back(i);
        for( ll j = 1LL * i *i; j <=1005; j += i )
            vst[ j ] ++;
    }
}
void gen()
{
     seiv();
     int k=0;
    for(long long i=0;vp[i]*vp[i]<=1000000;i++)
    {
      long long  j=vp[i];
        while(j*vp[i]<=1000000000){
            ap[k++]=vp[i]*j;
            j=j*vp[i];
        }
    }
}

int main()
{
  gen();
   int i=0;
   for(  i=0;i<=100;i++)
    cout<<ap[i]<<" ";
   // genAP();
   int t;
   cin>>t;
   while(t--){
        ans=0;
    int i=0,j=1,l;
    cin>>l>>x;
    upper_bound(vp.begin(),vp.end(),x);
//cout<<(upper_bound(vp.begin(),vp.end(),x)-vp.begin())-(upper_bound(vp.begin(),vp.end(),l)-vp.begin())<<endl;

   }

    return 0;
}

