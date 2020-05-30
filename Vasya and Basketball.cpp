#include<bits/stdc++.h>
using namespace std;
long long n,k,a[1000000],b[100000],ans1=-1*1e10,ans2=0,p1,p2;
int main()
{

  scanf("%lld",&n)
  ;
  for(int i=1;i<=n;i++)
        cin>>a[i];
    scanf("%lld",&k)
  ;
  for(int i=1;i<=k;i++)
    cin>>b[i];
  sort(a+1,a+n+1);
  sort(b+1,b+k+1);



    return 0;
}
