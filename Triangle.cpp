#include<iostream>
#include<iomanip>
using namespace std;

float greatest(float a,float b)
{
    if (a>b)
        return a;
    else
        return b;
}
float low(float a,float b)
{
    if (a<b)
        return a;
    if(b<a)
        return b;
        else return a;
}
float middel(float a,float b,float c)
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
    float A,B,C,area,a,b,z;
    cin>>A>>B>>C;

 a=greatest(greatest(A,B),C);
 b=middel(A,B,C);
z= low(low(A,B),C);
 cout<<a<<"\t"<<b<<"\t"<<z<<"\n";
 if(a<(b+z))
 {
     cout<<setprecision(1)<<fixed<< "Perimetro = "<<A+B+C<<"\n";
 }
 else
    cout<<setprecision(1)<<fixed<<"Area = "<<((A+B)*0.5)*C<<"\n";





    return 0;
}
