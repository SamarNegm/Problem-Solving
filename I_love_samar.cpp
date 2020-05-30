#include<iostream>
using namespace std;
int main()
{
    int n,worst=0,best=0,sum=0;
    cin>>n;
    int x[n];
    cin>>x[0];
    best=worst=x[0];
    for(int i=1;i<n;i++)
    {
        cin>>x[i];
        if(x[i]>best)
        {
            sum++;
            best=x[i];
        }
        if(x[i]<worst)
        {
            sum++;
           worst=x[i];
        }
    }

cout<<sum;


    return 0;
}
