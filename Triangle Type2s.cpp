#include<iostream>
#include<iomanip>
using namespace std;
float low(float a,float b)
{
    if (a<b)
        return a;
    else
        return b;
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
float greatest(float a,float b)
{
    if (a>b)
        return a;
    else
        return b;
}
int main()
{
    float A,B,C,a,b,c;
    cin>>a>>b>>c;

    A=(greatest(a,b),c) ;
   B=middel(a,b,c);
   C=low(low(a,b),c);
   cout<<A<<endl<<B<<endl<<C<<endl;
  if(a>0&&b>0&&c>0){
   if(A>=(B+C))
   {

   cout<<setprecision(1)<<fixed<<"Area ="<<(0.5*((A+B)*C))<<endl;
   }
   else  cout<<setprecision(1)<<fixed<<"Perimetro ="<<a+b+c<<endl;


  }
    return 0;
}
