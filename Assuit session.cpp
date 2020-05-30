#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int a[100000],ans,hap,sad;
int main()
{
    int m,n,k,x;
    cin>>n>>m>>k;
    for(int i=0; i<=100009; i++)
        a[i]=k;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(a[x]>0)
        {
            hap++;
            a[x]--;

        }
        else
        {

            sad++;
            for(int i=1; ( x+i<=m)||(x-i>0); i++)
            {
                if(x-i>0)
                    if(a[x-i]>0)
                    {
                        a[x-i]--;
                        break;
                    }
                if(x+i<=m)if(a[x+i]>0)
                    {
                        a[x+i]--;
                        break;
                    }
            }


        }

    }
    cout<<(hap>sad?"YES":"NO");

    return 0;
}
