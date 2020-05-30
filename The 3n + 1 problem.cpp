#include<iostream>
using namespace std;
long long ans,c,w,a[1000000];
void solve(long long x,long long y,long long w,long long c)
{
 if(a[x]!=0)
 {
     ans=max(ans,a[c]);
      return solve(w-1,y,w-1,0);
 }
if(x<=1)
{

    ans=max(ans,c);
    a[x]=ans;
    if(w>=y)
        return solve(w-1,y,w-1,0);
    else
    {
        cout<<++ans<<"\n";

        return;
    }
}

if(x%2==0)
return solve(x/2,y,w,c+1);
return solve(3*x+1,y,w,c+1);
}
int main()
{

    int x,y,g,q;
    while(cin>>q>>g)
    {
        y=max(q,g);
        x=min(q,g);
        ans=c=0;
        cout<<q<<" "<<g<<" ";
        solve(y,x,y,0);


    }


    return 0;
}
