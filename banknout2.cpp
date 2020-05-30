#include<iostream>
using namespace std;
int main()
{

    int  y,res;
    cin>>y;
    cout<<y<<endl;
    if(y>0&&y<1000000)
    {
        for(int i=0; i<=6; i++)
        {
            int x[7]= {100,50,20,10,5,2,1};

            res=y/x[i];
            cout<<res<<" nota(s) de R$ "<<x[i]<<",00"<<endl;
            y=(y-(res*x[i]));

        }
    }
    return 0;
}
