#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<vector>

int a[1000];
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
 for(int i=0;i<n;i++)
    printf("%d ",a[i].second);
     for(int i=0;i<n;i++)
    printf("\n%d ",a[i].first);

 int sum=0,j=0,cont=0;
 for (int i = 0; i < n; i++) {
    if (k >= a[i].first) {
      k -= a[i].first;
      cont++;
    }
  }

printf("\n\n%d\n\n\n",cont);
for(int i=0;i<cont;i++)
    printf("%d ",a[i].first);


    return 0;
}
