#include<bits/stdc++.h>
using namespace std;
long long a[10000008];
int main()
{
    long long n, l, r, x,sum=0,ans=0 ;
    cin>>n>>l>>r>>x;
    for(int i=0;i<n;i++)
        cin>>a[i];
for(int i=0;i<(1<<n);i++)
{
   long long  mx=-1*1e9;
    long long mn=1e9,sum=0;
    for(int j=0;j<n;j++)
    {
        if(i&(1<<j))
        {
            mn=min(mn,a[j]);
            mx=max(mx,a[j]);
            sum+=a[j];
        }
    }
  //  cout<<mn<<" "<<mx<<" "<<sum<<"\n";
    if(sum>=l&&sum<=r&&mx-mn>=x)
        ans++;
}
   cout<<ans;



    return 0;
}
