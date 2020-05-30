#include<iostream>
using namespace std;
int main()
{
    int n,h,x,cnt=0;
    cin>>n;
    cin>>h;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x<=h)
            cnt++;
        else
        cnt+=2;
    }
    cout<<cnt;
    return 0;

}
