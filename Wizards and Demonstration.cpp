#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,y,n,s;
    cin>>n>>x>>y;
    s=y*n/100;
   // cout<<s<<"\n";
    if(y*n%100==0)
     cout<<(ceil(s-x)>0?ceil(s-x):0);
     else
        cout<<(ceil(s-x+1)>0?ceil(s-x+1):0);




    return 0;
}
