#include<bits/stdc++.h>
using namespace std;
int a[140];
set<string>se;
bool is_pal(string s)
{
    if(s.length()==1)
        return false;
    else
    {
        for(int i=0;i<s.length()/2;i++)
            if(s[i]!=s[s.length()-i-1])
            return false;
        return true;

    }
}
int cnt(string s)
{
int    c=0;
    for(int i=0;i<140;i++)a[i]=0;

    for(int i=0;i<s.length();i++)
    if(a[s[i]]==0)
    {
       // cout<<s[i]<<" "<<(int)'o'<<" s[i] \n";
        c++;
        a[s[i]]++;
    }
    return c;
}
int numPal(string s)
{
int    ans=0;
se.clear();
    for(int k=1;k<=s.length();k++)
    {

       int  i=k;
        for(int i=0;i<=s.length()-k;i++){
                string   str="";
            for(int j=i;j<i+k;j++)
        str+=s[j];
        if(is_pal(str))
            se.insert(str);
     //   cout<<str<<endl;
        }

    }
    return se.size();
}
int main()
{
    string s;

   while(getline(cin,s))
   {
       cout<<"The string '"<<s<<"'"<<" contains "<<cnt(s)+numPal(s)<<" palindromes.\n";

   }





    return 0;
}
