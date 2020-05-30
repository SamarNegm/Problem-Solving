#include<iostream>
#include<string>
using namespace std;
void solve(string s,int x)
{
    if(x==s.length()/2)
    {
        cout<<"You won't be eaten!\n";
        return;
    }
    if(s[x]!=s[s.length()-x-1])
        {
            cout<<"Uh oh..\n";
            return;
        }
        return solve(s,x+1);
}
int main()
{
    string s;
    while(1==1)
    {
        int flag =1;
        getline(cin,s);
        if(s=="DONE")
            break;
        string tem="";
        for(int i=0;i<s.length();i++)
        {
            if(toupper(s[i])>='A'&&toupper(s[i])<='Z')
        tem+=toupper(s[i]);

        }
        solve(tem,0);
    }
}
