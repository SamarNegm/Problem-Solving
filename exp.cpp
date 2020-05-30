#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;
int a[41],b[41];
int main()
{
int a[41],b[41];
for(int i=0;i<40;i++)
    cin>>a[i];
for(int i=0;i<40;i++)
    cin>>b[i];
    sort(a,a+40);
    sort(b,b+40);
    for(int i=0;i<41;i++)
        cout<<a[i]<<" "<<b[i]<<"\n";





    return 0;
}
