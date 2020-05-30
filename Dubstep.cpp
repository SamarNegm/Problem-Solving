#include<iostream>
#include<string>
using namespace std;
int main()
{
   string s;
   int fr=0;
   cin>>s;
   for(int i=0;i<s.length();i++)
   {
       if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
       {
            if(fr!=0)
           cout<<" ";
           i+=2;
       }
       else{ cout<<s[i];
       fr=1;
   }}



    return 0;
}
