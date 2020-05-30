#include<iostream>
#include<algorithm>
using namespace std;
int a[200000];
int b[200000];
int main()
{

int n,m;
cin>>n;
int a1[n];

for(int i=0;i<n;i++)
{
    cin>>a1[i];
    a[a1[i]]++;
}
cin>>m;
int a2[m+1];
    for(int i=0;i<m;i++)
    {
        cin>>a2[i];
        b[a2[i]]++;
    }
    int ans=0;
    sort(a2,a2+m+1);
    sort(a1,a1+n+1);
    for(int i=0;i<n;i++ )
    {
       // cout<<a[a1[i]]<<" "<<a1[i]<<"  "<<b[a1[i]]<<" "<<b[a1[i]+1]<<endl;

          if(b[a1[i]-1]>0)
        {
            ans++;
            b[a1[i]-1]--;

        }
         else  if(b[a1[i]]>0)
        {
            ans++;
            b[a1[i]]--;

        }
        else  if(b[a1[i]+1]>0)
        {
            ans++;
            b[a1[i]+1]--;

        }
    }
    cout<<ans;



    return 0;
}
