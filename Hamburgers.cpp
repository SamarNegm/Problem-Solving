#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long x,y,z,xp,yp,zp,S=0,C=0,B=0;
    long long mony,cost;
    cin>>x>>y>>z;
    cin>>xp>>yp>>zp;
    cin>>mony;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='B')
            B++;
        else if(s[i]=='S')
            S++;
        else
            C++;
    }
    long long l=0,h=10000000000000,mid=0;
    while(l<h)
    {
        cost=0;
        mid=(l+h+1)/2;
        if(mid*B>x)
            cost+=(mid*B-x)*xp;
               if(mid*S>y)
            cost+=(mid*S-y)*yp;
               if(mid*C>z)
            cost+=(mid*C-z)*zp;
            if(cost>mony)
                h=mid-1;
            else
                l=mid;

//cout<<cost<<" "<<mid<<endl;

    }
cout<<l;





    return 0;
}
