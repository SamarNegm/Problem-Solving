#include<iostream>
using namespace std;
double greatest(double a,double b)
{
    if (a>b)
        return a;
    else if (b>a)
        return b;
}
double low(double a,double b)
{
    if (a<b)
        return a;
    else if (b<a)
        return b;
}
double middel(double a,double b,double c)
{
    if (a<b&&a>c)
        return a;
    else if (b<a&&b>c)
        return b;
        else
            return c;
}

int main()
{

   double A,B ,C,x,y ,z;
   int X=0;
   cin>>x>>y>>z;



 A==greatest(greatest(x,y),z);
 cout<<"A  "<<A<<endl;
 B==low(low(x,y),z);
 C==middel(x,y,z);
      if (A >= (B + C)){
            {
                cout<<"NAO FORMA TRIANGULO"<<endl;
                X=1;
            }
            if(X==0)
            {
                if((( A*A) ==((B*B )+( C*C))))cout<<"TRIANGULO RETANGULO"<<endl;
                if ((( A*A)>((B*B )+( C*C)))) cout<<"TRIANGULO OBTUSANGULO"<<endl;
                if((( A*A)<((B*B) + (C*C)) ))cout<<"TRIANGULO ACUTANGULO"<<endl;
            }
            }

   cout<<x<<endl;

        if(A==B&&A!=C)
        {

            cout<<"TRIANGULO ISOSCELES"<<endl;
        }
        if(A==C&&A!=B)
        {


            cout<<"TRIANGULO ISOSCELES"<<endl;
        }
        if(C==B&&C!=A)
        {
            cout<<"TRIANGULO ISOSCELES"<<endl;

        }
        if(A==B&&A==C)
        {

            cout<<"TRIANGULO EQUILATERO"<<endl;
        }









    return 0;
}
