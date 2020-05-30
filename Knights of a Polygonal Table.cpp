#include<bits/stdc++.h>
using namespace std;
long long a[100000],b[100000],idx[100000],sum[100000];
map<pair<int ,int> ,int> m;
map<int,int> m2;
vector<pair<int ,int> >v;
int main()
{

    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
        {
            cin>>b[i];
            m[make_pair(a[i],b[i])]=i;
         v.push_back(make_pair(a[i],b[i]));

        }
        sort(v.begin(),v.end());
        for(int i=0,j=1;i<n;j++,i++){
                sum[j]+=v[i].second+sum[j-1];
                if(i>k)
        m2[m[make_pair(v[i].first,v[i].second)]]=sum[j]-sum[j-k-1];
        else
            m2[m[make_pair(v[i].first,v[i].second)]]=sum[j];
        cout<<sum[j]<<endl;

        }
for(int i=1;i<=n;i++)
    cout<<m2[i]<<" ";

    return 0;
}
