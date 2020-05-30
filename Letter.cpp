#include<iostream>
#include<string>
using namespace std;
int a['z'+1],b['z'+1];
int main()
{
    string s,s2;
    getline(cin,s);
     getline(cin,s2);
     bool x= true;
     for(int i=0;i<s.length();i++)
     {
         if(s[i]!=' ')
            a[s[i]]++;

     }
       for(int i=0;i<s2.length();i++)
     {
         if(s2[i]!=' ')
            b[s2[i]]++;

     }
     for(int i=0;i<s2.length();i++)
        if(a[s2[i]]<b[s2[i]])
     {
        // cout<<a[s2[i]]<<" "<<b[s2[i]]<<(char)s2[i];
          x =false;
          break;

     }
     cout<<( x==true?"YES":"NO");




    return 0;
}
