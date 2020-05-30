#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ex[100005],a2[100005],k[100005];
int main()
{
    ll n,x,c=0,f2=0;
    scanf("%lld %lld",&n,&x);
    for(int i=0; i<n; i++)
    {
        scanf("%lld",k+i);
        ex[k[i]]++;
        if(ex[k[i]]==2)
        {
           puts("0");
            return 0;
        }
    }
    for(int i=0; i<n; i++)
    {
        c=(x&k[i]);


        if(a2[c]&&ex[c])
        {
            puts("1");
            return 0;
        }
        a2[c]++;
        if(a2[c]==2)
        {
            f2=1;
        }

    }

    if(f2)
    puts("2");
    else
        puts("-1");
    return 0;
}
