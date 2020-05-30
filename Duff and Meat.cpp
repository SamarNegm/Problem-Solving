#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,p_m=101,total=0,p;
    while (n--)
    {
        cin>>a>>p;
        if(p_m>p)p_m=p;
        total+=a*p_m;
    }
cout<<total;
    return 0;
}

