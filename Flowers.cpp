#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5,mod=1e9+7;
long long dp[N],k,sum[N];
void solve( )
{
    for(int i=1;i<N;i++)
    {
        (i<=k?dp[i]=1:dp[i]=((dp[i-1]+dp[i-k])%mod+mod)%mod);
    }
    for(int i=1;i<N;i++)
    {
        sum[i]=((sum[i-1]+dp[i])%mod+mod)%mod;
    }
}
int main()
{
   int t,f,l;
   scanf("%d%d",&t,&k);

   solve();
   while(t--)
   {
       cin>>f>>l;
       cout<<((sum[l+1]-sum[f])%mod+mod)%mod<<"\n";;
   }


    return 0;
}
