
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,ans=0,c=0;
    cin>>a>>b;
    if(a<=b&&a>1)
        cout<<1;
    else if(a==1)
    cout<<0;
    else
    {

    c=b;int i=b-1;
    ans++;
  while (true)
    {

        if(c==a)
        {
            cout<<ans;
            return 0;
        }
        if(c>a||i<=1)
        {
            cout<<-1;
            return 0;
        }
       c+=i;
       c--;
       i--;
       ans++;

    }
    }


    return 0;
}
