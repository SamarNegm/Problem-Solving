#include<iostream>
#include<cmath>


#include "complex.h"
using namespace std;



complex::complex()
{

}
void complex::setcomp(float r,float g,float i)
{
    realpart=r;
    imganpart=g;
    im=i;
}
complex complex::add(complex s )
{

   realpart=s.realpart+realpart;
 int x=pow(sqrt(-1),im);
 cout<<x<<endl;

 imganpart =s.imganpart+imganpart*im;
  cout<< "realpart = "<<realpart<<endl<<"imganpart = "<< imganpart<<endl;


}



int main()
{
    complex s,r;
    s.setcomp(3,5,4);
    r.setcomp(1,2,4);
    s.add(r);



}






