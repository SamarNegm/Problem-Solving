#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long
const int N = 1000001;
long long vst [ 30000005 ],ans,x,j=2,ap[100000000],k;

vector<long long>vp;

void seiv()
{
    for( long long i = 2,k=0 ; i <=N; ++i )
    {
        if( vst[ i ] )
        {
            continue ;
        }
        vp.push_back(i);
        for( ll j = 1LL * i *i; j <=N; j += i )
            vst[ j ] ++;
    }
}
void gen()
{
     seiv();
   k=0;
    for(long long i=0;i<=vp.size()-1;i++)
    {
      long long  j=vp[i];
        while(j*vp[i]<= 100LL){
            ap[k++]=vp[i]*j;
         //   cout<<ap[k-1]<<" ";
            j=j*vp[i];

        }
    }
}

int main()
{
  gen();
   int i=0;
   // genAP();
   int t;
   cin>>t;
   while(t--){
        ans=0;
    int i=0,j=1,l;
    cin>>l>>x;
    for(int i=0;i<k;i++)if(ap[i]<=x&&ap[i]>=l)cout<<ap[i]<<"\n",ans++;
    cout<<ans<<endl;
   }

    return 0;
}


