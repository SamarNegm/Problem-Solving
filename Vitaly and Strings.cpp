#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,t;
    int b=0;

    cin>>s>>t;
    string temp=s;
    int    l=s.length()-1;
    for(int i=0; i<=l; i++)
    {
        if(s[l-i]!='z')
        {
            s[l-i]=char(int(s[l-i]+1));
            if(s>temp&&s<t)
            {
              //  cout<<s;
                b=1;
                break;
            }

        }
        else s[l-i]='a';
    // cout<<s[l]<<endl;
    }
    cout<<(b==1?s:"No such string");


    return 0;
}
