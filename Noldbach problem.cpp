#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long vst [ 300005 ],p[100000],ans,n,k,l=1,sum[100005];

vector<long long>vp;

void seiv()
{
    p[1]=1;
    for( long long i = 2,k=0 ; i <=100005; ++i )
    {
        if( vst[ i ] )
        {
            continue ;
        }
        vp.push_back(i);

        p[i]=1;
        sum[l]=sum[l-1]+i;
        l++;
        for( ll j = 1LL * i *i; j <=100005; j += i )
            vst[ j ] ++;
    }
}
int main()
{
    seiv();
   cin>>n>>k;
   int b=lower_bound(vp.begin(),vp.end(),n)-vp.begin();
   if(k==1&&n>=2)
   {
       cout<<"YES";
       return 0;
   }
   for(int i=0;i<b;i++)
   {
//cout<<vp[i+1]+vp[i]+1<<" "<<vp[i+1]<<" "<<vp[i]<<endl;
if(p[vp[i+1]+vp[i]+1]==1&&vp[i+1]+vp[i]+1<=n)
{
    ans++;


}


   }
     if(ans>=k)
    {
        cout<<"YES";
        return 0;
    }
   cout<<"NO";



    return 0;
}
