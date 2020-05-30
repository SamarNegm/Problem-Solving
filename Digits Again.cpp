#include<iostream>
#include<cmath>
using namespace std;
int sum(int q)
{
int    sum=0;
    while(q)
    {
        sum+=q%10;
        q/=10;
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,ans=0;
        cin>>a;
       long long  h=a,l=0;

        while(l<h)
        {

            long long n=(l+h+1)/2;
          //    cout<<n <<" "<<h<<" "<<l<<"\n";
         //   cout<<n<<"  "<<(n*(n+1)+n*(n-1))<< " "<<a/(n*(n+1)+n*(n-1)/2)<<" ops\n";
            if((n*(n+1)+n*(n-1)/2)<=a)
            {
                ans=n;
           //    cout<<n<<"  "<<(n*(n+1)+n*(n-1))<< " "<<a/(n*(n+1)+n*(n-1))<<" ops\n";
                l=n;

            }
            else
                h=n-1;



        }
        cout<<ans<<" \n";
    }

    return 0;
}
