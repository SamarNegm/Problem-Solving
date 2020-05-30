#include<stdio.h>
#include<iostream>
int a[200000];

int main()
{
    int n,k,p=0,j=0,mi=INT_MAX,mx=INT_MIN;
    scanf("%d%d",&n,&k);
    int b[n];
    for(int i=0; i<n; i++)
    {
    scanf("%d",&b[i]) ;
    p++;
    if(b[i]<0)
       // b[i]=-1*b[i];
    if(b[i]<mi)
    {
        mi=b[i];

    }
    if(p==k||i==n-1)
    {
        a[j]=mi;
        if(a[j]>mx)
            mx=a[j];
        j++;
        mi=INT_MAX;
        p=0;
    }


    }

        printf("%d\n",mx);



}
