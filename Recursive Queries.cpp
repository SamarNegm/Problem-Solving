#include<bits/stdc++.h>
using namespace std;
long long r,l,k,ans;
int q(int x)
{
    if(x<10){
        return x;
    }
    int y=1;
    while(x)
    {
        if(x%10!=0)
            y*=x%10;
        x/=10;
    }
    return q(y);
}
long long sum[10][1000006];
int main()
{
    int x;
    cin>>x;
    for(int i=1;i<10;i++)
        for(int j=1;j<=1000002;j++)
                sum[i][j]=sum[i][j-1]+(q(j)==i);
    while(x--)
    {
        scanf("%d%d%d",&l,&r,&k);
        printf("%lld\n",sum[k][r]-sum[k][l-1]);
    }
    return 0;
}
