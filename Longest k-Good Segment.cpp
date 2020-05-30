#include<bits/stdc++.h>
using namespace std;
long long a[10000010],q[10000010],mx;
long long n,k,x,y,z;
int check(long long z)
{
    x=0;
    while(x<=n)
    {
        y=0;
        for(int i=x; i<x+z&&x+z<=n; i++)
            if(q[a[i]]==0)
            {

                y++;
                q[a[i]]++;
            }
            cout<<y<<" "<<z<<" "<<x<<endl;

        if(y<=k&&y>mx)
        {
         mx=y;
           return x;
        }

        x++;

        memset(q,0,1000000);
    }


    return -1;
}
int main()
{
    scanf("%lld%lld",&n,&k);

    for(int i=0; i<n; i++)
    {
        scanf("%lld",a+i);
    }
       if(n<=k)
    {
        cout<<1<<" "<<n;
        return 0;
    }
for(int i=n;i>=0;i--)
{
    if(check(i)>=0){
                    printf("%lld %lld",x+1,x+i);
          return 0;
    }
}




}
