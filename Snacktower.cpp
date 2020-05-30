#include<iostream>
using namespace std;
int main()
{
    int x,con=0;
    cin>>x;
    int n[x];
    int mx=x;
    for(int i=0; i<x; i++)
        cin>>n[i];
    for(int i=0; i<x; i++)
    {
        if(n[i]<mx)
        {
            cout<<endl;
            con++;
        }

    if(n[i]==mx){
    for(int k=0; k<=con; k++)
    {
        int g=mx-k;
        if(g!=0)
        cout<<g<<" ";

    }
    cout<<endl;
    mx-=con+1;
    con=0;
    }


    }




    return 0;
}
