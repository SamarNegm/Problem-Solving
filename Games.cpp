#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;;
    cin>>n;
    int a[n],h[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>h[i];
    }
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<n;k++)
            if(a[j]==h[k]&&j!=k)
            sum++;
    }
    cout<<sum;


    return 0;
}
