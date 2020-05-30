#include<iostream>
using namespace std;
int a[100000],ans;
int main()
{
    int x,y, i=0;
    cin>>x>>y;
    for(int i=0;i<x;i++)
        cin>>a[i];
    while(i<x)
    {
        if(a[i++]<=y)
            ans++;
        else
            break;
    }
    x--;
   //   cout<<x<<" "<<i<<endl;;
    while(x>=i)
    {
   //     cout<<x<<" "<<i<<endl;;
        if(a[x--]<=y)
            ans++;
        else
            break;
    }
    cout<<ans;



    return 0;
}
