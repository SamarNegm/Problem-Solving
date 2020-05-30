#include<iostream>
int A[10];
int B[10];
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int x=INT_MAX,y=INT_MAX,n,insc=INT_MAX;
    for(int i=0;i<a;i++)
    {
        cin>>n;
        if(n<x)
            x=n;
       A[n]=1;
    }
     for(int i=0;i<b;i++)
    {
        cin>>n;
        if(n<y)
            y=n;
            B[n]=1;
            if(A[n]==1&&n<insc)
                insc=n;
    }
int ans=min(x,y)*10+max(x,y);
    if(y==x)
        cout<<y;
    else
    {
        if(ans<insc)
            cout<<ans;
        else
            cout<<insc;

    }

    return 0;
}
