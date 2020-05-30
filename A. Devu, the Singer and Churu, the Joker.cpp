#include<iostream>
using namespace std;
int main()
{

    int n,d,t,sum=0;
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        sum+=t;

    }
    if((((n-1)*10)+sum)<=d)
    {
        cout<<(d-sum)/5;
    }
    else
        cout<<-1;

    return 0;
}
