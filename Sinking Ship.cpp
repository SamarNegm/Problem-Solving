#include<iostream>
using namespace std;
int main()
{
    int x,cap=0;
    cin>>x;
    string a[x],b[x];
    for(int i=0;i<x;i++){
        cin>>a[i]>>b[i];
        if(b[i]=="captain")
            cap=i;
    }
    for(int i=0;i<x;i++)
        if(b[i]=="rat")
        cout<<a[i]<<endl;

     for(int i=0;i<x;i++)
        if(b[i]=="woman"||b[i]=="child")
        cout<<a[i]<<endl;
          for(int i=0;i<x;i++)
        if(b[i]=="man")
        cout<<a[i]<<endl;

    cout<<a[cap];








    return 0;
}
