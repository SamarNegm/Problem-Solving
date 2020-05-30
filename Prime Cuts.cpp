#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long vst [ 200005 ],ans,q[30005],x,j=2;
vector<long long>vp,mp;

void seiv()
{
   // vp.push_back(0);
vp.push_back(1);
    for( long long i = 2,k=0 ; i <=3005; ++i )
    {
        if( vst[ i ] )
        {
            continue ;
        }
        vp.push_back(i);
    //      cout <<i<<" "<<j++<<endl;
        for( ll j = 1LL * i *i; j <=3005; j += i )
            vst[ j ] ++;
    }
}
int main()
{
    seiv();
    long long x,y,c,c2,s=1;
    while(scanf("%lld %lld",&x,&c)==(ll)2)
    {
       // cin>>x>>c;
        cout<<x<<" "<<c<<":";
      ;
     long long q=lower_bound(vp.begin(),vp.end(),x)-vp.begin();
     if(vp[q]==x)
        q++;
    // q++;
    if(q&1)    c = c*2-1;
        else       c = c*2;
        if(c > q)  c = q;
        ll s=q/2-c/2;
        cout<<s<<" "<<c<<" "<<q<<endl;
         for(int i =s, j = 0; j < max(c,(ll)1); j++, i++)
            printf(" %lld", vp[i]);
        puts("\n");
/*
     if(2*y>q)
     {21 2
18 2
18 18
100 7
         for(int i=1;i<=q;i++)
            cout<<vp[i]<<" ";
         cout<<endl;
     }
     else if(q%2==0)
     {
         int w=q/2-3;
         int a=upper_bound(vp.begin(),vp.end(),w)-vp.begin()-1;
         cout<<a<< " a"<<endl;
         for(int i=0;i<y*2;i++,w++)
            cout<<vp[w]<<" ";
         cout<<endl;

     }
     else
     {
         int w=q/2-2;
          int a=upper_bound(vp.begin(),vp.end(),w)-vp.begin()-1;
          cout<<a<< " a"<<endl;
         for(int i=0;i<y*2;i++,w++)
            cout<<vp[w]<<" ";
         cout<<endl;
     }

*/
;    }



    return 0;
}
