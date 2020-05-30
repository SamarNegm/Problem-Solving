#include<bits/stdc++.h>
using namespace std;
vector<long long >a;
map<long long,int>m;
int main()
{
    long long n,x,k=1,w;
    scanf("%lld%lld",&n,&x);
    for(int i=0;i<n;i++){
        cin>>w;
        if(m[w]!=1){

    a.push_back(w);
        m[w]=1;}
    }
   sort(a.begin(),a.end());
   x=x-(x-a.size());
   cout<<x<<"\n";
   if(x%n==0&&x!=n)
    cout<<a[x/n-1]<<" "<<a[n-1]<<" \n";
   else
 cout<<a[x/n-(x==n)]<<" "<<a[(x%n)-1+(x==n)]<<"\n";
    return 0;
}

