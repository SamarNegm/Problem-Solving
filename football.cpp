#include<iostream>
#include<string>
using namespace std;
int main()
{
    int sum=1;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==s[i+1])
       {

        sum++;
        if(sum+1>=7)
           break;
       }
        else
            sum=0;

    }
    if(sum+1>=7)
        cout<<"YES";
    else
        cout<<"NO";


}
