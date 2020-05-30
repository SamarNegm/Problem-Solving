#include<iostream>
#include<string>
using namespace std;
int main(){
      string s;
    while(getline(cin,s))
    {


        string re="";
        for(int i=0;i<s.length();i++)
        {

            if(s[i]!=' ')
                re+=s[i];
            else{
                for(int j=0;j<re.length();j++)
                cout<<re[re.length()-1-j];
                cout<<" ";
            re="";
            }
        }
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]!=' ')
               cout<<s[i];
               else break;

        }
        cout<<endl;
    }
}

