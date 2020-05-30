#include<iostream>
#include<string>
using namespace std;
void upperCase(string s)
{
    for(int i=0;i<s.length();i++)
    {
        s[i]=toupper(s[i]);
        cout<<s[i];
    }
}
string lowerCase(string s)
{
    for(int i=0;i<s.length();i++)
    {
        s[i]=tolower(s[i]);
      //  cout<<s[i];
    }
    return s;
}
int main()
{
    string s;
    int low=0,upper=0;
    cin>>s;
    string cpy=s;
    string a=lowerCase(s);
    for (int i=0;i<s.length();i++)
    {
        if(a.at(i)==cpy.at(i))
        {
                low++;
        }
        else
            upper++;
    }
    if(low>=upper)
        cout<<a;
    else
        upperCase(s);


    return 0;
}
