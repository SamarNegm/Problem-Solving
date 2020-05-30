#include<iostream>
using namespace std;
double greatest(double a,double b);
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
    if(a<c&&a<c)
        return a;
    if (b<a&&b>c)
        return b;
    if(b<c&&b>a)
        return b;
    else
        return c;
}


int main()

{
    double a,b,c;
    cin>>a>>b>>c;

    double A=greatest(greatest(a,b),c);

    cout<<A<<endl;

    double C=low(low(a,b),c);
    cout<<"c =" <<C<<endl;
    double B=middel(a,b,c);
    cout<<"B "<<B<<endl;
    return 0;
}

double greatest(double a,double b)
{
    if (a>b)
        return a;
    else if (b>a)
        return b;
}
