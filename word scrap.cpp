#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int j;
    while (getline(cin,s))
    {
        string a="";
        for(int i=0; i<s.length(); i++){
            if (s[i]!=' ')
            a+=s[i];}
           for(int i=0; i<s.length(); i++)
            if(s[i]==' ')
            {
                cout<<" ";
            }
            for(int k=0; k<a.length(); k++)
                {
                    cout<<a[a.length()-k-1];
                }
                cout<<" ";



        cout<<endl;

    }



    return 0;
}
