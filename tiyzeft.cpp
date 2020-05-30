#include<iostream>
using namespace std;
double greatest(double a,double b);
double low(double a,double b)
{
    if (a<b)
        return a;
    else
        return b;
}
double middel(double a,double b,double c)
{
    if (a<b&&a>c)
        return a;
    if(a<c&&a>b)
        return a;

    if (b<a&&b>c)
      return b;
    if(b<c&&b>a)
        return b;

    if(c>b&&c<a)
        return c;
    if(c>a&&c<b)
        return c;
        if(a==b||a==c)
            return a;
        if(b==a||b==c)
            return b;
}

int main()
{
    double A,B,C,X=0;
    cin>>A>>B>>C;
    if(A>0&&B>0&&C>0)
    {
        double a=greatest(greatest(A,B),C);
        double c=low(low(A,B),C);
        double b=middel(A,B,C);

        if (a >= (b + c))
        {
            cout<<"NAO FORMA TRIANGULO"<<endl;
            X=1;
        }
        if(X==0)
        {
            if((( a*a) ==((b*b )+( c*c))))cout<<"TRIANGULO RETANGULO"<<endl;
            if(a!=b&&a!=c&&c!=b)
            {
                 if ((( a*a)>((b*b )+( c*c)))) cout<<"TRIANGULO OBTUSANGULO"<<endl;
                if((( a*a)<((b*b) + (c*c)) ))cout<<"TRIANGULO ACUTANGULO"<<endl;

            }

            if(a==b&&a!=c)
            {

                if ((( a*a)>((b*b )+( c*c)))) cout<<"TRIANGULO OBTUSANGULO"<<endl;
                if((( a*a)<((b*b) + (c*c)) ))cout<<"TRIANGULO ACUTANGULO"<<endl;

                cout<<"TRIANGULO ISOSCELES"<<endl;
            }
            if(a==c&&a!=b)
            {
                if ((( a*a)>((b*b )+( c*c)))) cout<<"TRIANGULO OBTUSANGULO"<<endl;
                if((( a*a)<((b*b) + (c*c)) ))cout<<"TRIANGULO ACUTANGULO"<<endl;
                cout<<"TRIANGULO ISOSCELES"<<endl;
            }
            if(c==b&&c!=a)
            {
                if ((( a*a)>((b*b )+( c*c)))) cout<<"TRIANGULO OBTUSANGULO"<<endl;
                if((( a*a)<((b*b) + (c*c)) ))cout<<"TRIANGULO ACUTANGULO"<<endl;

                cout<<"TRIANGULO ISOSCELES"<<endl;
            }
            if(a==b&&a==c&&b==c )
            {
                if ((( a*a)>((b*b )+( c*c)))) cout<<"TRIANGULO OBTUSANGULO"<<endl;
                if((( a*a)<((b*b) + (c*c)) ))cout<<"TRIANGULO ACUTANGULO"<<endl;

                cout<<"TRIANGULO EQUILATERO"<<endl;
            }
            if(a!=b&&a!=c&&c!=b&&a >= (b + c))
            { if((( a*a) ==((b*b )+( c*c))))cout<<"TRIANGULO RETANGULO"<<endl;
            if ((( a*a)>((b*b )+( c*c)))) cout<<"TRIANGULO OBTUSANGULO"<<endl;
                if((( a*a)<((b*b) + (c*c)) ))cout<<"TRIANGULO ACUTANGULO"<<endl;

            }
        }
    }
    return 0;
}

double greatest(double a,double b)
{
    if (a>b)
        return a;
    else
        return b;
}
