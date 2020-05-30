#include<bits/stdc++.h>
using namespace std;
long long x,y,z,a[1000000],ans;
int main()
{

    scanf("%lld %lld",&x,&y);
    for(int i=0 ;i<x;i++){
            cin>>a[i];
    }
sort(a,a+x);
if(a[y-1]==a[y])
    cout<<-1;
else if(y==0&&a[0]<2)
    cout<<-1;
else if(y==0&&a[0]>=2)
    cout<<1;
else
    cout<<a[y-1];
    return 0;
}
