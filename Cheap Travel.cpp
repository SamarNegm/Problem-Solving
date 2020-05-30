#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m,a,b,ans1,ans2;
  cin>>n>>m>>a>>b;
    if(m*a<=b) cout<<a*n;
    else
    {
    ans1=(n/m)*b+b;
    ans2= ((n/m)*b) + (n%m)*a;
    cout<<min(ans1,ans2);
    }

    return 0;
}

