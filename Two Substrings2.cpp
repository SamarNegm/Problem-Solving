#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x[4]= {0},ba=0,ab=0;
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='A'&&s[i+1]=='B'&&s[i+2]=='A')
        {
            for(int j=i+2+1; j<s.length(); j++)
            {
                if(s[j]=='B'&&s[j+1]=='A'||s[j]=='A'&&s[j+1]=='B')
                {
                    cout<<"YES";
                    ba=1;
                    break;
                }
            }
            if(ba==1)
                    break;
        }

       else if(s[i]=='B'&&s[i+1]=='A'&&s[i+2]=='B')
        {
            for(int j=i+2+1; j<s.length(); j++)
                if(s[j]=='A'&&s[j+1]=='B'||s[j]=='B'&&s[j+1]=='A')
                {
                    cout<<"YES";
                    ab=1;
                    break;
                }
            if(ab==1)
                break;
        }
        else  if(s[i]=='A'&&s[i+1]=='B')
        {
            x[0]++;
            x[1]++;
        }
        else if(s[i]=='B'&&s[i+1]=='A')
        {
            x[2]++;
            x[3]++;
        }


    }
    if(s.length()<=4)
    {
        if(s=="ABBA"||s=="BAAB")
            cout<<"YES";
        else
            cout<<"NO";
    }
    else if(x[0]>0&&x[1]>0&&x[2]>0&&x[3]>0&&ab==0&&ba==0)
        cout<<"YES";
    else if(ab==0&&ba==0)
        cout<<"NO";

    return 0;
}
