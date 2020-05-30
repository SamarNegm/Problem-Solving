#include<iostream>
 using namespace std;
 int main()
 {
string s;
cin>>s;
for(int i=0;i<s.length()-3;i++)
    if(s[i]==s[i+1]||s[i]==s[i+2]||s[i]==s[i+3])
{
    cout<<"YES";
    return 0;
}
cout<<"NO";
     return 0;
 }
