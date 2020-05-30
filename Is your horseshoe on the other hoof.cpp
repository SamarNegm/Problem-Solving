#include<iostream>
using namespace std;
int main()
{
    int a[4],sum=0;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
        for(int j=0;j<i;j++)
            if(a[j]==a[i]){
            sum++;
            break;
            }
    }
    cout<<sum;
    return 0;
}
