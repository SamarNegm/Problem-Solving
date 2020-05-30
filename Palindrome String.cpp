#include<iostream>
#include<cmath>
using namespace std;
bool ispal(string s)
{
    for(int i=0;i<s.length()/2;i++)
        if(s[i]!=s[s.length()-i-1])
        return false;
    return true;
}
int main()
{
    string s,a="";
    cin>>s;
    for(int i=0;i<s.length();i++)
        if(s[i]!=a[a.length()-1])
        a+=s[i];
cout<<(ispal(a)?"YES":"NO");
    return 0;
}
