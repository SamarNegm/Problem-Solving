#include<iostream>
using namespace std;
int main()
{
    int x,a[7]={47,74,447,474,477,747,744};
    cin>>x;
    if(x%4==0||x%7==0)
    {
        cout<<"YES";
        return 0;
    }
    else
    {
        for(int i=0;i<7;i++)
            if(x%a[i]==0)
        {
           // cout<<a[i];
            cout<<"YES";
            return 0;
        }
        cout<<"NO";

    }
    return 0;

}
