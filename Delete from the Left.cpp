#include<iostream>
using namespace std;
int c;
int main()
{
    string s,t;
    cin>>s>>t;
    for(int i=s.length()-1,j=t.length()-1;j>=0&&i>=0;i--,j--)
    {
        if(s[i]!=t[j])
            break;
        c++;
    }
    cout<<s.length()-c+t.length()-c;

    return 0;
}
