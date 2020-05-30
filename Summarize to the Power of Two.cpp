#include<bits/stdc++.h>
using namespace std;
map<long long, long long>m,m2;
long long x[180000],ans;
vector<int>b;
int main()
{

    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",x+i);
        m[x[i]]++;
    }
    if(n==1)
    {
        printf("%d",1);
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        bool f=0;
        for(int j=0; j<31; j++)
        {
            long long k=(1<<j)-x[i];
            if((m[k]>0&&k!=x[i])||(m[k]>1&&m[x[i]]&&k==x[i]))
            {

                f=1;
                break;
            }
        }
        if(!f)
            ans++;
    }

    printf("%d",ans);


    return 0;
}
