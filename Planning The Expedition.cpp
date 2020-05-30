#include<bits/stdc++.h>
using namespace std;
map<int,int>ma;
  int n,m,x,ans;
bool can(int mid)
{
    int a=0;
    for(int i=0;i<=100;i++)
    {
        int q=ma[i];
        while(q-mid>=0){
            a++;
            q-=mid;
        }
    }
    if(a>=n)
        return true;
    return false;
}
int solve()
{
int l=0,h=m,mid;
while(l<h)
{
    mid=(l+h+1)/2;
    if(can(mid))
    {
        l=mid;
    }
    else
        h=mid-1;
}


    return l;
}
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++)
        {
            cin>>x;
            ma[x]++;
        }
       cout<< solve();




    return 0;
}
