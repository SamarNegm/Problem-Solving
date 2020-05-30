#include<iostream>
#include<string>
#include<cmath>
using namespace std;
 int main()
 {
     string s;
     int cunt=0,i=0,j=0;
     cin>>s;
     int len=s.length();

     for( i=0;i<s.length();i++)
     {
         for( j=0;j<s.length()&&j!=i;j++)
         {
              if(s.at(i)==s.at(j))
             {
                cunt++;
                break;
             }
         }
     }
     len-=cunt;
     int len2=abs(len);
     if(len2%2==0)
        cout<<"CHAT WITH HER!";
     else
        cout<<"IGNORE HIM!";
     return 0;
 }
