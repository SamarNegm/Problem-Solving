#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long
long long vst [ 2000005 ],ans,x,o,p[10000000];
vector<long long>vp;
long long rev(int q)
{
    ll y=0;
     while(q)
        {
            y*=10;
            y+=q%10;
            q/=10;
        }
        return y;
}
void seiv()
{
    for( long long i = 2,k=0 ; i <=1000001; ++i )
    {
        if( vst[ i ] )
        {
            continue ;
        }
        p[i]=1;
        bool flag=1;
        int q=i,y=rev(i);

        while(y>0)
        {
           // cout<<y<<endl;
            if(y%10==0)
            {

                flag=0;
            }
                y/=10;
           // cout<<y<<"   "<<p[y]<<"\n";
            if(p[rev(y)]!=1&&y>0)
                flag=0;
        }
        if(flag==1){
            vp.push_back(i);
        cout<<i<<" fe  "<<o++<<"  \n ";
        }

        for( ll j = 1LL * i *i; j <=1000001; j += i )
            vst[ j ] ++;
    }
}

int main()
{
    seiv();
    long long x,a;
    cin>>x;
    while(x--)
    {
        cin>>a;
        cout<<upper_bound(vp.begin(),vp.end(),a)-vp.begin()<<endl;;

    }
    return 0;
}

