#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    while(1==1)
    {
        int flag =1;
        getline(cin,s);
        if(s=="DONE")
            break;
        string tem="";
        for(int i=0;i<s.length();i++)
        {
            if(toupper(s[i])>='A'&&toupper(s[i])<='Z')
        tem+=toupper(s[i]);

        }
        cout<<tem<<"\n";
       int  j =tem.length()-1;
        for(int i=0;i<=tem.length()/2;i++,j--)
            if(tem[i]!=tem[j])
        {
            flag=0;
            cout<<"Uh oh..\n";
            break;

        }
        if(flag==1)
            cout<<"You won't be eaten!\n";

    }




    return 0;
}
