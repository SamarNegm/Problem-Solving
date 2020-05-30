#include<bits/stdc++.h>
using namespace std;
map<long long,int>m;
vector<long long >a,b;
int main()
{
    long long n,x,k=0,w;
    scanf("%lld%lld",&n,&x);
    for(int i=0;i<n;i++){
        cin>>w;
        b.push_back(w);
          if(m[w]!=1){

    a.push_back(w);
        m[w]=1;}
        else
            k++;
    }
   sort(a.begin(),a.end());
   sort(b.begin(),b.end());
   if(k>0)
   {
      x/=k;
       cout<<a[x/a.size()-(x==n)]<<" "<<a[(x%a.size())+(x==n)]<<"\n";
   return 0;}
   if(x%n==0&&x!=n)
    cout<<b[x/n-1]<<" "<<b[n-1]<<" \n";
   else
 cout<<b[x/n-(x==n)]<<" "<<a[(x%n)-1+(x==n)]<<"\n";
    return 0;
}

