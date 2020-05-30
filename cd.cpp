#include<bits/stdc++.h>
using namespace std;
long long a[10000008];
 long long n, l, r, x,sum=0,ans=0 ;
int main()
{
    while(scanf("%lld%lld",&x,&n)==2){
 long long ans=1e9,sum=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
for(int i=0;i<=(1<<n);i++)
{
sum=0;
    for(int j=0;j<n;j++)
    {
        if(i&(1<<(j)))
        {
            sum+=a[j];

        }
    }
     if(abs(sum-x)<=abs(ans-x)&&sum<=x)
        {
                l=i;
               ans=sum;
        }

}
  for(int j=0;j<n;j++)
        if(l&(1<<j))
        cout<<a[j]<<" ";
    cout<<"sum:"<<ans<<"\n";

    }

    return 0;
}

