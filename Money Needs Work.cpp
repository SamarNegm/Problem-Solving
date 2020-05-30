#include<iostream>
#include<algorithm>
using namespace std;
long long a[1000000],b[1000000];

int main()
{
    long long n,m,sum=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    sort( a,a+n);
    sort(b,b+m);
    for(int i=n-1,j=m-1;i>=0&&j>=0;i--)
    {
        if(b[j]>=a[i]){

            sum+=a[i];
        j--;
        }

    }
cout<<sum;
    return 0;
}
