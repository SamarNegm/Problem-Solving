#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,coun=0,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        sum+=x;
    }
    for(int i=1;i<=5;i++)
    {
        if((sum+i)%(n+1)!=1)
        {
            coun++;
        }

    }
    cout<<coun;

    return 0;
}
