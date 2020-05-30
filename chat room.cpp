#include<iostream>
#include<string>
using namespace std;
int main()
{
//pnnepelqomhhheollvlo
string s;
cin>>s;
int x=0;
for(int i=0;i<s.length();i++){
if(s[i]=='h'){
    for(int j=i;j<s.length();j++ )
    if(s[j]=='e')
    for(int k=j;k<s.length();++k)
    if(s[k]=='l')
    for(int m=k+1;m<s.length();m++)
    if(s[m]=='l')
    for(int n=m;n<s.length();n++)
    if(s[n]=='o')
    x=1;
    break;

}

}
if(x==0)
    cout<<"NO";
    else
cout<<"YES";


    return 0;
}
