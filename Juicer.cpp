#include<iostream>
using namespace std;
int main()
{
    int n,b,d,ans=0,a,sum=0;
    cin>>n>>b>>d;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a<=b)
        {
            sum+=a;
            if(sum>d)
            {
                ans++;
                sum=0;
            }
        }
    }
   cout<<ans;
}
