
#include<cstdio>
#include<algorithm>
using namespace std;
long long a[100010],b[100010];
long long n,k,x,y,mx,sum;
 long long l=0,h,mid;
bool check(long long l)
{
    sum=0;
    for(long long i=0;i<n;i++){
        if(a[i]*l>b[i])
        sum+=(long long)(a[i]*l-b[i]);
        if(sum>k)
           return 0;
    }

        return 1;

}
int main()
{
   scanf("%lld %lld",&n,&k);
    for(long long i=0;i<n;i++)
    {
      scanf("%lld",a+i);
    }
    for(long long i=0;i<n;i++){
     scanf("%lld",b+i);
    }
l=0,h=1e10;
    while(l<h)
    {
       mid=(l+h+1)/2;
        if(check(mid))
            l=mid;
        else
            h=mid-1;


    }
   printf("%lld",l);


    return 0;
}
