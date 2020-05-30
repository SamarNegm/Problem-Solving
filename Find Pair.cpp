#include<bits/stdc++.h>
using namespace std;
vector<pair<long,long> >m;
vector<long long >a,idx;
bool cpm( int s , int f ){
    if( a[ f ] > a[ s ] )
        return true ;
    if( a[ f ] == a[ s ] )
        return true ;
    return false ;
}
int main()
{
    int n,x,k=1,w;
    a.push_back(0);
    scanf("%d%d",&n,&x);
    for(int i=0;i<n;i++){
idx[i]=i;
        cin>>w;
        if(w<0)
            a.push_back(-w);
            else
    a.push_back(w);
    }
   sort(idx.begin(),idx.end());
a[0]=a[n];
   if(x%n==0)
    cout<<idx[x/n]<<" "<<idx[n]<<" "<<n<<a[0]<<" "<<a[1]<<" "<<a[2];
   else
 cout<<idx[x/n+1]<<" "<<idx[(x%n)]<<"\n";;
    return 0;
}

