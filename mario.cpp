#include<iostream>
using namespace std;
int main()
{int x,z,a,b,c,y;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cin>>y;
        int z[y];
        for(int i=0;i<y;y++)
        {
            cin>>z[y];
        }
        for(int i=0;i<y;y++){
            if(z[i]>z[i+1])
            {
                a=a+1;
            }
            else if(z[i]<z[1+i])
            {
                c=c+1;
            }
            else if(z[i]==z[1+i])
            {
                b=b+1;
            }


        }
        cout<<a<<" " << b <<" " <<c<<"\n";
    }











    return 0;
}
