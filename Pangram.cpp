#include<iostream>
#include<string>
using namespace std;
int a[26];
int main()
{
    int x,flag=0;
    string y;
    cin>>x>>y;
    if(x<26)
        cout<<"NO";
    else
    {
        for(int i=0; i<y.length(); i++)
        {

              a[int(tolower(y[i])-'a')]++;

        }
        for(int i=0; i<26; i++)
        {
            if(a[i]==0)
            {
                cout<<"NO";
                flag =1;
                break;

            }
        }
        if(flag==0)
            cout<<"YES";
    }


    return 0;
}
