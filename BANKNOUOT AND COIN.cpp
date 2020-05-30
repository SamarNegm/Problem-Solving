#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

     int x100,x50,x20,x10,x5,x2,x1,rst,rst2,y1,y5,y50,y25,y10;
      float xy;int x;
    cin>>xy;
x=xy/1;
float z=(((xy)-x)*100+.5);
int y=z;
if(x<100)
{rst=x;
 }   if(x%100>0)
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
             rst2=y;
            if(y50>=50)

            {
                y50=y/50;
                 rst2=y%50;

            }
            else y50=0;
             if(rst2>25)
            {
                y25=rst/25;
                rst2=rst2%25;
            }
            else y25=0;
            if(rst2>=10)
            {
                y10=rst2/10;
                rst2=rst2%10;
            }
            else y10=0;
            if(rst2>=5)
            {
                y5=rst2/5;
                rst2=rst2%5;

            }
            else y5=0;
            if(rst2>=1)
            {
                y1=(rst2/1);
            }
            else  y1=0;



    cout<<"NOTAS:"<<endl;
    cout<<x100<< " nota(s) de R$ 100,00"<<endl;
    cout<<x50<< " nota(s) de R$ 50,00"<<endl;
    cout<<x20<<" nota(s) de R$ 20,00"<<endl;
    cout<<x10<< " nota(s) de R$ 10,00"<<endl;
    cout<<x5<< " nota(s) de R$ 5,00"<<endl;
    cout<<x2<<" nota(s) de R$ 2,00"<<endl;

   cout<< "MOEDAS:"<<endl;
   cout<<x1<<" moeda(s) de R$ 1,00"<<endl;

 cout<<y50<<" moeda(s) de R$ 0.50"<<endl;
 cout<<y25<<" moeda(s) de R$ 0.25" <<endl;
cout<<y10<< " moeda(s) de R$ 0.10" <<endl;
cout<<y5<< " moeda(s) de R$ 0.05"<<endl;
cout<<y1<< " moeda(s) de R$ 0.01"<<endl;


    return 0;
}
