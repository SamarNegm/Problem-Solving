#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long  l1, r1, l2, r2,k,c=0;
    cin>>l1>>r1>>l2>>r2>>k;
    c=abs(min(r1,r2)-max(l1,l2))+1;
    if(r1<=r2&&l1>=l2&&r1-l1+1>=0)
    {
       // cout<<"hi1";
        c=r1-l1+1;
        if(k>=l1&&k<=r1)
            c--;
    }
    else if(r2<=r1&&l1>=l2&&r2-l1+1>=0)
    { //cout<<"hi2";
        c=r2-l1+1;
        if(k>=l1&&k<=r2)
            c--;
    }
    else if(r1<=r2&&l2>=l1&&r1-l2+1>=0)
    {// cout<<"hi3";

        c=r1-l2+1;
        if(k>=l2&&k<=r1)
            c--;

    }
    else if(r2<=r1&&l2>=l1&&r2-l2>=0)
    { //cout<<"hi4";
        c=r2-l2+1;
        if(k>=l2&&k<=r2)
            c--;
    }
    else{
             //cout<<"hi5";
        c=0;}



    cout<<c;

    return 0;
}
