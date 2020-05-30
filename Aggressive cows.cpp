#include<iostream>
#include<algorithm>
using namespace std;
long long a[100000000];
int main()
{
    long long t,n,c,mid,ans=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>c;
        long long h =30,l=0;
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        while(l<h)
        {
            mid=(l+h+1)/2;
            long long y=0,d=mid,z=0;
            while(true)
            {
                int x;
                x=lower_bound(a,a+n,a[z]+mid)-a;
                cout<<x<<" "<<mid<<"\n";
                if(x==n)
                    break;
                else
                    z=x;
                y++;


            }
            //  cout<<" z is " <<z<<"   mid "<<mid<< endl;
            //    cout<<endl;
            if(y>=c-1)
                l=mid;
            else
                h=mid-1;

        }
        cout<<l<<" \n";
    }




    return 0;
}
