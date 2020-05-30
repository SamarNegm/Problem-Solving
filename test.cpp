#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="qwertyuiop";
    string s2="asdfghjkl;";
    string s3="zxcvbnm,./";
    string s;
    char a;
    cin>>a;
    cin>>s;


    for(int i=0; i<s.length(); i++)
    {
        for(int j=0; j<s1.length(); j++)
        {
            if(s[i]==s1[j])
            {

                if(a=='R')
                    cout<<s1[j-1];
                else
                    cout<<s1[j+1];
                continue;
            }
        }
        for(int j=0; j<s2.length(); j++)
        {
            if(s[i]==s2[j])
            {
                if(a=='R')
                    cout<<s2[j-1];
                else
                    cout<<s2[j+1];
                continue;
            }
        }
        for(int j=0; j<s3.length(); j++)
        {
            if(s[i]==s3[j])
            {
                if(a=='R')
                    cout<<s3[j-1];
                else
                    cout<<s3[j+1];
                continue;
            }
        }

    }


    return 0;
}
