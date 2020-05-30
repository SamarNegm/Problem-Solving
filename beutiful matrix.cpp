#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,sum=0;
    int    sum1=0,rw=1,clm=1,place=0,ZEFT;
    while(sum<25)
    {
        cin>>x;
        if(x==0)
        {
            sum=sum+1;
        }
        if(x==1)
        {
            sum1=sum+1;
            sum=sum+1;
        }

        if(sum1%5!=0)  rw=(sum1/5)+1;
        else rw=sum1/5;

        if(sum1%5!=0)
        {
            clm=(sum1%5);
        }
        else
        {
            clm=sum1/rw;
        }
        place=abs(3-rw)+abs(3-clm);
    }
    cout<<place;

    return 0;
}
