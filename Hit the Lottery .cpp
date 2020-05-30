#include<bits/stdc++.h>
using namespace std;
int a[]={1, 5, 10, 20, 100},ans;
int main()
{

    long long x;
    scanf("%lld",&x);
  ans+=x/100;
  x=x%100;
  ans+=x/20;
  x=x%20;

  ans+=x/10;
  x=x%10;
    ans+=x/5;
  x=x%5;
  ans+=x;



printf("%d",ans);

    return 0;
}
