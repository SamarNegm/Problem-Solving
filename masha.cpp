#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
long long ans,mx,a[1000010],b,sum[1000010],sumt[1000010];
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];


    }
    for(int i=1;i<=n;i++)
    {
        cin>>b;
        if(b)
        {

            sum[i]=sum[i-1]+a[i];
            ans+=a[i];
            sumt[i]=sumt[i-1];
        }
        else{
            sum[i]=sum[i-1];
            sumt[i]=sumt[i-1]+a[i];
        }
    }
    for(int i=k;i<=n;i++)
        mx=max(sumt[i]-sumt[i-k],mx);
//cout<<sumt[n]<<" "<<sumt[dx+k-1]<<endl;
    cout<<ans+mx;





    return 0;
}
