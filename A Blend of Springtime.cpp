#include<iostream>
#include<cmath>
using namespace std;
bool fa,fb,fc;
int a,b,c;
bool check(string z)
{
if(z=="ABC"||z=="BAC"||z=="CAB"||z=="CBA"||z=="CAB"||z=="BCA"||z=="ACB")
  return true;
  return false;
}
int main()
{
    string s;
    cin>>s;
    if(s.length()<3)
    {
        cout<<"No";
        return 0;
    }
    for(int i=0;i<s.length();i++)
    {
        string q="";
        q=q+s[i]+s[i+1]+s[i+2];
        if(check(q))
        {
            cout<<"Yes";
            return 0;
        }


    }





cout<<"No";

    return 0;
}
