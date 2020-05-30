#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,k,f,t,ans=INT_MIN,j;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>f>>t;
        if(t>k)
         j=f-t+k;
         else
            j=f;
        if(j>ans)
            ans=j;
    }
    cout<<ans;

    return 0;
}
