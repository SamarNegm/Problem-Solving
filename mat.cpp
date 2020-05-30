#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int sum=25,x,rw,clm,place=0;
    for(int i=1; i<=25; i++)
    {
        cin>>x;
        if(x==1)
        {
            if(i%5!=0)
                rw=(i/5)+1;
            else rw=i/5;

            if(i%5!=0)
            {
                clm=(i%5);
            }

            else clm=i/rw;
            place=abs(3-rw)+abs(3-clm);
        }
    }
    cout<<place;

    return 0;
}
