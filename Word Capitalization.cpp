#include<iostream>
#include<string>
using namespace std;
 void upperCase(string s)
{
    for(int i=0;i<s.length();i++)
    {
        s[0]=toupper(s[0]);
        cout<<s[i];
    }
}
int main()
{
 string s;
 cin>>s;
 upperCase(s);
 return 0;
}
