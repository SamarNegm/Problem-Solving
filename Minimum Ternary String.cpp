#include<bits/stdc++.h>
using namespace std ;
#define ll long long
int j,v[100000],c1,c2,c;

int main()
{

    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='2')
        {
            c2++;
            j++;
        }
        else if(s[i]=='0')
        {
            v[j]++;
        }
        else
            c1++;
    }
    for(int i=0; i<v[0]; i++)
        cout<<"0";
    for(int i=0; i<c1; i++)
        cout<<"1";
    for(int i=1; i<=c2; i++)
    {
        cout<<"2";
        for(int j=0,k=i; j<v[k]; j++)
            cout<<"0";
    }




    return 0;
}
