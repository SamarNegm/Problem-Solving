#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,p,f=0;
    cin>>n>>p;
      char s[n];
    cin>>s;
    for(int i=0;i<n-p;i++)
    {
      if(s[i]!=s[p+i])
      {
          f=1;
          if(s[i]=='.')
            s[i]=(s[i+p]=='0'?'1':'0');
            else if(s[i+p]=='.')
                    s[i+p]=(s[i]=='0'?'1':'0');
      }
      else if(s[i]==s[i+p]&&s[i]=='.')
      {
          f=1;
          s[i]='0';
          s[i+p]='1';
      }
    }
    if(!f)
    {
        cout<<"No";
        return 0;
    }
    for(int i=n-p;i<n;i++)
    if(s[i]=='.')
        s[i]='0';
    cout<<s;



    return 0;
}
