
#include<stdio.h>
using namespace std;
int a[101],ans[101];
int main()
{

 int n;
scanf("%d",&n);
 for(int i=1;i<=n;i++ )
 {
   scanf("%d",&a[i]);
 }

for(int k=1;k<n+1;k++)
{
    int j=1;
    while(a[j]!=k)
    {
        j++;
    }
    ans[k]=j;
}
for(int i=1;i<=n;i++)
    printf("%d ",ans[i]);




    return 0;
}
