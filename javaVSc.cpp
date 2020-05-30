#include<iostream>
#include<cstring>
using namespace std;
void upperCase(string s)
{
    for(int i=0;i<s.length();i++)
    {
        s[i]=toupper(s[i]);
        cout<<s[i];
    }
}
int main()
{
  string s;
  cin>>s;
  cout<<s.length()<<endl;
  cout<<s.compare("samar")<<endl
  <<s.at(3)<<endl;
   cout<<endl<<s.at(0)<<endl;
   upperCase(s);
   cout<<endl<<s.at(0)<<endl
   <<s.replace(0,2,"o")<<endl
   <<s.compare(0,2,"sa")<<endl
   <<s.empty()<<endl
   <<s.insert(5," magdy")<<endl
   <<s.substr(0,3);

return 0;

}

