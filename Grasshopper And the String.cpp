#include<iostream>
using namespace std;
int a[300],last,temp,ans;

int main()
{
    a['A']=a['E']=a['I']=a['O']=a['U']=a['Y']=1;
    string s;
    cin>>s;
    for(int i=1;i<=s.length();i++)
    {
        if(a[s[i-1]])
        {
            temp=i-last;
            last=i;
        }
        if(temp>ans)
            ans=temp;
    }
    if(s.length()+1-last>ans)
        ans=s.length()+1-last;
cout<<ans;


    return 0;
}
