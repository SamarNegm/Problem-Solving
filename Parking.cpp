#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int a[10000];
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {

            int v;

                cin>>v;
                cout<<0<<"\n";

        }
        else{

            for(int i=0;i<n;i++)
            cin>>a[i];
            sort(a,a+n);
            cout<<2+2*(a[n-1]-(a[0]+1))<<endl;

            memset(a,n+1,0);
        }
    }




    return 0;
}
