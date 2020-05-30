#include<iostream>
#include<algorithm>

using namespace std;
long long a[10000010],q[10000010];
long long n,k,x,y;
int check(long long l)
{
   x=1;
   y=x+l-1;
   while(x<=n)
   {
       //cout<<x<<" "<<y<<" "<<a[x-1]-a[y]<<" "<<l-k<<endl;;

       if(a[y]-a[x-1]>=l-k)
        return x;
       x++;
       y=x+l-1;
   }


return -1;
   }


int main()
{


    int t;
    cin>>t;
    while(t--){
             cin>>n>>k;
  for(int i=1;i<=n;i++)
  {
      cin>>q[i];
      a[i]=a[i-1]+q[i];
  }

long long h=n,l=0,f=0,ans=0;
while(h>l)
{
    long long mid=(l+h+1)/2;
    if(check(mid)>0)
    {
        ans=mid;
        f=check(mid);
        l=mid;
    }
    else
        h=mid-1;

}
cout<<ans<<endl;
}


    return 0;
}
