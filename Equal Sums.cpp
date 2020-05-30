#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll,pair<ll,ll> >m;
ll total,a[10000000];
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        total =0;
        int q;
        scanf("%d",&q);
        for(int j=1;j<=q;j++)
        {
            cin>>a[j];
            total+=a[j];

        }
        for(int p=1;p<=q;p++)
        {
            ll k= total -a[p];
     //       cout<<k<<endl<<m[k].first<<" "<<i<<endl;;

            if(m[k].first==0)
            {
                m[k].first=i;
                m[k].second=p;
            }
            else if(m[k].first!=i)
            {
                cout<<"YES\n";
                cout<<i<<" "<<p<<" \n"<<m[k].first<<" "<<m[k].second<<"\n";

                return 0;
            }
        }




    }






cout<<"NO";
    return 0;
}
