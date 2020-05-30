#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long vst [ 200005 ],ans,a[5005][5005],x,y,mr,mi,mk,mj;
vector<long long>vp,mp;
void seiv()
{

    for( long long i = 2,k=0 ; i <=1e5+5; ++i )
    {
        if( vst[ i ] )
        {
            continue ;
        }
        vp.push_back(i);
   //     cout <<i<<" "<<j++<<endl;
        for( ll j = 1LL * i *i; j <=1e5+5; j += i )
            vst[ j ] ++;
    }
}
int main()
{
    seiv();
  mk=mr=1e10;
  cin>>x>>y;
  for(int i=0;i<x;i++)
  {
      mi=0;
      for(int j=0;j<y;j++)
      {
          cin>>a[i][j];
       mi=mi+vp[lower_bound(vp.begin(),vp.end(),a[i][j])-vp.begin()]-a[i][j];
      }
      mr=min(mr,mi);
  }
   for(int j=0;j<y;j++)
  {
      mj=0;
      for(int i=0;i<x;i++)
      {

          mj=(mj+vp[lower_bound(vp.begin(),vp.end(),a[i][j])-vp.begin()])-a[i][j];

      }

      mk=min(mk,mj);
  }
  cout<<min(mk,mr);






    return 0;
}


