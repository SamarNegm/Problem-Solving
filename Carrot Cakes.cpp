#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,t,k,d;
    cin>>n>>t>>k>>d;
int    z=ceil((float) n/k) *t;
    int sum1 =0,sum2=d;
    for(int i=0;i<z;i++)
    {
        if(sum1<=sum2){sum1+=t;
        cout<<"sum1 "<<sum1<<endl;}
        else
        {sum2+=t;
        cout<<sum2 <<"sum2\n";}
    }
cout<<z*t;

    return 0;
}
