#include<bits/stdc++.h>
using namespace std;
int N=1e6+5,x;
long long sum[1000005],q,ans;
long long solve(int t)
{
    long long f=1,h=x;
    long long mid;
    while(f<h)
    {
        mid=(f+h+1)/2;
        if(sum[mid]<t)
        {
            ans=mid;
            f=mid;
        }
        else
            h=mid-1;


    }
    return ans+1;
}

int main()
{
int last=0;
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        cin>>q;
        sum[i]=sum[i-1]+q;

    }
 cin>>q;
    long long t;
    while(q--)
    {
       cin>>t;
       cout<<lower_bound(sum,sum+x,t)-sum<<"\n";
    }




    return 0;
}



  for(int i=0;i<n;i++)
    {


       if(i>0)
       {
           if(abs(a[i]-a[i-1])>=d)
            q.push(i)
            else if(a[i]<q.front())
            {
                q.pop();
                q.push(i);
            }
       }
       else
         q.push_back(i);
    }

    for(int i=0;i<q.size();i++)
        cout<<q.pop()<<" ";

