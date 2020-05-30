#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long
long long vst [ 2000005 ],ans,x;
vector<long long>vp;
bool num(long long y)
{

        while(y)
        {
            if(y%10==0)
            {

                return false;
            }
            else
                y/=10;
        }
    return true;
}
void seiv()
{
    for( long long i = 2,k=0 ; i <=2000000; ++i )
    {
        if( vst[ i ] )
        {
            continue ;
        }
        if(num(i)){
        vp.push_back(i);
    //   cout<<i<<endl;
        }

        for( ll j = 1LL * i *i; j <=2000000; j += i )
            vst[ j ] ++;
    }
}

int main()
{
   seiv(); long long x,a;
    cin>>x;
    while(x--)
    {
        cin>>a;
       long long w=lower_bound(vp.begin(),vp.end(),a)-vp.begin();;
cout<<vp[w]<<" "<<w<<endl;
    }
    return 0;
}
