#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x,A=0,D=0;
    cin>>x;
    char s[x];
    for(int i=0;i<x;i++)
    {
        cin>>s[i];
        if(s[i]=='A')
        A++;
        else
            D++;
    }
    if(A>D)
        cout<<"Anton";
    else if(D>A)
        cout<<"Danik";
    else
        cout<<"Friendship";

    return 0;
}
