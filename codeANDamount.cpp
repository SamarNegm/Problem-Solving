#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c;
    cin>>a>>c;
    if(a==1)
    {
        b=4.00;
        cout<<"Total: R$ "<<setprecision(2)<<fixed<<c*b<<endl;
    }
    else if(a==2)
    {
        b=4.50;
        cout<<"Total: R$ "<<setprecision(2)<<fixed<<c*b<<endl;
    }


    else if(a==3)
    {
        b=5;
        cout<<"Total: R$ "<<setprecision(2)<<fixed<<c*b<<endl;
    }
    else if(a==4)
    {
        b=2;
        cout<<"Total: R$ "<<setprecision(2)<<fixed<<c*b<<endl;
    }

    else if (a==5)
    {
        b=1.50;
        cout<<"Total: R$ "<<setprecision(2)<<fixed<<c*b<<endl;
    }

    return 0;
}
