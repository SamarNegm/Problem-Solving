#include<iostream>
#include<string>
using namespace std;
void convert(string &s)
{
    for(int i;i<s.length();i++)
    {
        s[i]=tolower(s[i]);
    }
}
int main()
{

    string s;
 std::cin>>s;
std::string& tolower(s);

cout<<s;



    return 0;
}
