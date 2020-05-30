#include<bits/stdc++.h>
using namespace std;
long long ans,lft,rt;
vector<long long >x;
int main()
{
    int a,q;
     scanf("%d",&a);
    for(int i=0;i<a;i++)
        {
            scanf("%d",&q);
            x.push_back(q);
        }
        int i=0,j=a-1;
        while(i<=j)
        {

            if(lft>=rt)
            {
                rt+=x[j--];
            }
            else
                lft+=x[i++];
                   if(lft==rt)
                ans=lft;
        }
    printf("%lld",ans);




    return 0;
}
