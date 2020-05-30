#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s.at(0)=='a'||s.at(0)=='h'||s.at(1)=='1'||s.at(1)=='8')
    {
        if((s.at(1)=='1'||s.at(1)=='8')&&(s.at(0)=='a'||s.at(0)=='h'))
        {
            cout<<3;
        }
        else
            cout<<5;
    }
    else
        cout<<8;





    return 0;
}
