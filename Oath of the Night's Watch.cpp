#include<stdio.h>
int a[100001];
using namespace std;
int main()
{
    int  n,mx=0,mn=1000000000,ans=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

            if(a[i]<mn)
                mn=a[i];
            if(a[i]>mx)
                mx=a[i];
        }

    for(int i=0;i<n;i++)
    {
        if(a[i]>mn&&a[i]<mx)
            ans++;
    }
    printf("%d",ans);

}
