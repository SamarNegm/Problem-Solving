#include <bits/stdc++.h>
using namespace std;
int a[1000];
int main()
{
    int x,y,f,l;
    scanf("%d%d",&x,&y);
    for(int i=0;i<x;i++)
    {
        scanf("%d%d",&f,&l);
        for(int i=f;i<l;i++)
        {
         a[i]++;
        }

    }
    for(int i=0;i<y;i++)
    {
        if(a[i]==0)
        {
            printf("NO");
            return 0;
        }
    }
     printf("YES");

}
