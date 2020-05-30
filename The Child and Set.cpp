#include<bits/stdc++.h>
using namespace std;

int m,n,i,l,j,ans,a[100000],sum[100000],k=1,b[100000];
vector<int>v;
int main()
{
    scanf("%d%d",&m,&l);
    for( i=2;i<=l;k++,i+=2){
    for(int j=63;j>=0;j--)
     if(i & (1 << j))ans=j;
    a[k]=(1<<ans);
    b[k]=i;
    sum[k]+=sum[k-1]+a[k];
   //cout<<sum[k]<<" "<<k<<" "<<l<<endl;;
    }
  //  cout<<sum[k-1]<<endl;
    i=0;
    while(sum[k-1]>=m)
    {
        sum[k-1]-=a[i++];
    }
  //  cout<<sum[k-1]<<" "<<m/2+m%2<<" "<<m/2+m%2+sum[k-1]<<endl;
    if(m-sum[k-1]>l/2+l%2)
    {
        cout<<-1;
    }
    else
    {
        cout<<k-max(i,1)+(m-sum[k-1])<<endl;
        for(int j=max(i,1);j<k;j++)
            cout<<b[j]<<" ";
        for(int j=0,x=1;j<(m-sum[k-1]);j++,x+=2)
            cout<<x<<" ";
    }





}
