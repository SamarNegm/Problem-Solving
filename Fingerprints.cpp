#include<iostream>
using namespace std;
bool idx[100000];
int a[1000];
int main()
{
    int x,y,z;;
    cin>>x>>y;
    for(int i=0; i<x; i++)
        cin>>a[i];

    for(int i=0; i<y; i++)
    {
        cin>>z;
        idx[z]=1;

    }
    for(int i=0; i<x; i++)
        if(idx[a[i]])
            cout<<a[i]<<" ";


    return 0;
}
