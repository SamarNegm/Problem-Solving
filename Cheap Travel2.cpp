#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m,a,b,chep;
    cin>>n>>m>>a>>b;
    if(m>n&&(m/n)*b<a*n)
        cout<<(m/n)*b;
    else  if((n/m)*b+min(n%m*a,b)<a*n)
        cout<<(n/m)*b+min(n%m*a,b);
    else cout<<a*n;

    return 0;
}
