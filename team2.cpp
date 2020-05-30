#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int ans, a,b,c,x;
int main()
{
    int t,t2,gcd=1;
    scanf("%d %d",&t,&t2);
   int x=6-max(t,t2)+1;
   for(int i=1;i<=6;i++)
    if(x%i==0&&6%i==0)
    gcd=i;
printf("%d/%d",x/gcd,6/gcd);

    return 0;
}
