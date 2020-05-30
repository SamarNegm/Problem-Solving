#include<iostream>
using namespace std;
int main()
{
    int x,xi,yi,y;
    cin>>x;
    int n[x];

    for(int i=0; i<x; i++)
    {
        cin>>n[i];
    }
    cin>>y;
    for(int i=0; i<y; i++)
    {
        cin>>xi>>yi;
        if(xi!=1&&xi!=x)
        {
            n[xi]=n[xi]+yi-1;
            n[xi-2]= (n[xi-2]+(n[xi-1]-yi));
            n[xi-1]=0;
        }

        else if(xi==1)
        {
            n[xi]=n[xi]+yi-1;
            n[xi]=0;
        }
        else if(x==xi)
        {

            n[xi-2]=n[xi-1]-yi+n[xi-2];
            // cout<<"n[x] ="<<n[x-1]<<" \n n[xi-2=] "<<n[xi-2]<<endl;
            n[xi-1]=0;

        }
        for(int i=0; i<x; i++)
    {
        cout<<n[i]<<endl;
    }
    cout<<"----------";
    }
    for(int i=0; i<x; i++)
    {
        cout<<n[i]<<endl;
    }

}
//(n[xi-2]+(n[xi-1]-yi-1));
// n[xi]+yi;
