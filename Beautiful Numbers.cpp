#include<bits/stdc++.h>
using namespace std;
vector <int>bn;
void gen(int n,int i,int k)
{
    if(i==k+1)
        return;
        if(i==k)
        bn.push_back(n);
      //  cout<<n<<" \n";
    gen(n*10+1,i+1,k);
    gen(10*n+2,i+1,k);
    gen(n*10+3,i+1,k);


}
int main()
{
        int q;
while(cin>>q)
{
  gen(0,0,q);

  sort(bn.begin(),bn.end());
  for(int i=0;i<q;i++)
    cout<<1;
  cout<<"\n";
  for(int i=1;i<bn.size();i++)
        cout<<bn[i]<<"\n";
        bn.clear();
        cout<<"\n";
}
}


