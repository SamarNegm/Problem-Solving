#include<bits/stdc++.h>
using namespace std;
long long pw(long long i){
return i*i*i;
}
int c[200],r[200],m[200][200];
int main (){
 int n,m,k ,a,ans=0;
 scanf("%d%d%d" , &n,&m,&k) ;
 for(int i=0;i<n;i++)
    for(int j=0;j<m;j++){
            scanf("%d",&a);
  m[i][j]=a;
  r[j]+=a;
    }
    for(int i=0;i<m;i++)
        for(int j;j<n;j++)
    {
        c[j]+=m[i][j];
    }

    cout<<ans;

}
