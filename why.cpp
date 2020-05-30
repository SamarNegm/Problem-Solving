#include<iostream>
#include<map>
using namespace std;
map<long long,long long >a;
int main()
{

   long long x,y,b,ans=100000;
   cin>>x>>y;
   for(int i=0;i<y;i++)
   {
       cin>>b;
       a[b]++;

   }
    for(int i=1;i<=x;i++){

   ans=min(a[i],ans);
    }
    cout<<ans;




    return 0;
}
