#include<iostream>
#include<string>
using namespace std;
int main()
{
   long long x,y,c,ans=0;
   string a;
    cin>>x>>y;
    for(int i=0;i<x;i++)
    {
        cin>>a>>c;
        if(a=="+")
        {
            y+=c;
        }
        else
        {
            if(c>y)
            {ans++;
            }
            else
                y-=c;
        }
    }

    cout<<y<<" "<<ans;

    return 0;
}
