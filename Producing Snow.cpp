#include<bits/stdc++.h>
using namespace std;
long long ans[1000000],a[1000000],b[1000000];
int main()
{
    long long x,r=0;
    scanf("%lld",&x);
    for(int i=0;i<x;i++)
    {
        cin>>a[i];

    }
    for(int i=0;i<x;i++)
    cin>>b[i];
    for(int i=0;i<x;i++)
{
     ans[i]+=min(a[i],b[i]);
        ans[i]+=min(r,b[i]);

        if(r>b[i])
            r=r-b[i];
        else
            r=0;
        if(a[i]>b[i])
            r+=a[i]-b[i];
        cout<<ans[i] <<" ";
}



    return 0;
}
