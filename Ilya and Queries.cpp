#include<bits/stdc++.h>
using namespace std;
int a[1000000],b[1000000],l,r,m;
int main()
{
    string s;
    cin>>s;
    char x=s[0];
    for(int i=1,j=1;i<s.length();i++,j++){
            a[i]=a[i-1]+(s[i]==s[i-1]);

   // cout<<s[i]<< "  "<<a[i]<<endl;
    }

    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>l>>r;

    cout<<a[r-1]-a[l-1]<<endl;
    }







    return 0;
}
