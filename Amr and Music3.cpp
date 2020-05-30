#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
   int n,k;
   scanf("%d %d",&n,&k);
 vector<pair<int,int> >a(n);
 for(int i=0;i<n;i++)
 {
     int x;
     scanf("%d",&x);
     a[i]=make_pair(x,i+1);

 }
 sort(a.begin(),a.end());
int sum=0,j=0,cont=0;
 for (int i = 0; i < n; i++) {
    if (k >= a[i].first) {
      k -= a[i].first;
      cont++;
    }
  }
printf("%d\n",cont);
for(int i=0;i<cont;i++)
    printf("%d ",a[i].second);


    return 0;
}
