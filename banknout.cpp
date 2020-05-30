#include<iostream>
using namespace std;
int main()
{
    int x,x100,x50,x20,x10,x5,x2,x1,rst;
    cin>>x;
      rst=x;

    if(x%100>0)
    {

 rst=x%100;
        x100=x/100;
    }
    else x100=0;
    if(rst>50)
    {
        x50=rst/50;
        rst=rst%50;
    }
    else x50=0;

    if(rst>=20)
    {
        x20=rst/20;
        rst=rst%20;

    }
    else x20=0;

    if(rst>=10)
    {
        x10=rst/10;
        rst=rst%10;

    }
    else x10=0;
    if(rst>=5)
    {
        x5=rst/5;
        rst=rst%5;


    }
    else x5=0;
                if(rst>=2)
        {
            x2=rst/2;
            rst=rst%2;

        }
        else x2=0;
                     if(rst>0)
            {
                x1=rst;
            }
            else x1=0;

    cout<<x<<endl;
    cout<<x100<< " nota(s) de R$ 100,00"<<endl;
    cout<<x50<< " nota(s) de R$ 50,00"<<endl;
    cout<<x20<<" nota(s) de R$ 20,00"<<endl;
    cout<<x10<< " nota(s) de R$ 10,00"<<endl;
    cout<<x5<< " nota(s) de R$ 5,00"<<endl;
    cout<<x2<<" nota(s) de R$ 2,00"<<endl;
    cout<<x1<<" nota(s) de R$ 1,00"<<endl;
    return 0;
}
