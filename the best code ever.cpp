#include <iostream>
#include <set>

using namespace std;

int D[200000];

int main()
{
   int N,i,F,R; unsigned int M=0x80000000; long long m;
   F=R=0;
   cin>>N;
   for(i=0;i<N;i++)
       cin>>D[i];
   set<long long>DS(D,D+N);
   for(i=0;i<N;i++)
   {
     for(m=1;m<=M;m<<=1)
     if(DS.count(1LL*D[i]+m))
     {
         if(!R){F=D[i];R=m;}
         if(DS.count(1LL*D[i]+2LL*m))
         {
          cout<<3<<endl<<D[i]<<' '<<D[i]+m<<' '<<D[i]+2*m;
          return 0;
         }
     }
   }
    if(R==0)cout<<1<<endl<<D[0];
    else cout<<2<<endl<<F<<' '<<F+R;
}
