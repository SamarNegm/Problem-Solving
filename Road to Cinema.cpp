#include<iostream>
#include<vector>
#include<algorithm>
using  namespace std;
int main()
{
   long long n,k,s,t,a,b,mid=-1;
   vector< pair<long long ,long long> >v;
   vector<long long>v2;
   cin>>n>>k>>s>>t;
   for(int i=0;i<n;i++)
   {
       cin>>a>>b;
       v.push_back(make_pair(a,b));

   }
   for(int i=0;i<k;i++){
        long long x;
   cin>>x;
    v2.push_back(x);
   }
   sort(v.begin(),v.end());
   int l=0,h=v[n-1].first;
cout<<v[n-1].first<<" "<<v[0].first;

    return 0;
}
