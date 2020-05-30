#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b;int contA=0,contB=0;
    cin>>a>>b;


if(a.length()>=b.length()&&(a>b||b>a))
{cout<<a.length();
}
else if(b.length()>=a.length()&&(a>b||b>a))
{
    cout<<b.length();
}
else cout<<-1;
    return 0;
}
