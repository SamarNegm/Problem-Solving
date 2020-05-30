#include<iostream>
using namespace std;
int ans;
int solve(int q,int m)
{
 if(q<=m)
 {
     ans++;
     return 1;
 }
 return solve(q/2,m)+solve(q/2+q%2,m);

}

int main()
{
    int q,m;
 while(cin>>q>>m)
 {
     ans=0;
    cout<< solve( q, m)<<"\n";

 }





    return 0;
}
