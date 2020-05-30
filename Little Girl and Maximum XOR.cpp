#include<bits/stdc++.h>
using namespace std;
long long pw(long long x,long long y)
{
    long long ans=1;
    while (x--)
    {
        ans*=y;
    }
    return ans;
}
int main()
{
    long long x,y,i=63,c=0;
    cin>>x>>y;
    for(i;i>=0;i--)
    {
        if((x>>i)!=(y>>i))
            break;
            c++;
    }

    cout<<pw(i+1,2)-1;







    return 0;
}
