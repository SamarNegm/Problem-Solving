#include<iostream>
#include<algorithm>
using namespace std;
long long a[100010],sum[100010],n,t;
bool check(long long l)
{
long long   x=1;
long long   y=x+l-1;

   while(x<=n)
   {
//cout<<sum[y]<<" "<<sum[x-1]<<"  "<<sum[y]-sum[x-1]<<endl;

       if(sum[y]-sum[x-1]<=t&&sum[y]-sum[x-1]>0)
        return true;
        if(sum[y]-sum[x-1]<0)
            return false;
       x++;
       y=x+l-1;
   }
return false;
}

int main()
{

    cin>>n>>t;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum[i]=sum[i-1]+a[i];
    }

    int l=0,h=n;
    while(l<h)
    {
        long long mid=(l+h+1)/2;
        if(check(mid))
            l=mid;
            else
            h=mid-1;

    }
    cout<<l;

    return 0;
}

