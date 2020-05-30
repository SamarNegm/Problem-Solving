
#include<stdio.h>
using namespace std;
int a[101];
int main()
{
    int n;
    scanf("%d",&n);
    int x;
    scanf("%d",&x);
    for(int i=0; i<x; i++)
    {
        int t;
        scanf("%d",&t);
        a[t]++;
    }


    int y;
    scanf("%d",&y);
    for(int i=0; i<y; i++)
    {
        int t;
        scanf("%d",&t);
        a[t]++;

    }

    for(int i=1; i<=n; i++)
        if(a[i]==0)
        {
            printf("Oh, my keyboard!");
            return 0;
        }
    printf("I become the guy.");


    return 0;
}
