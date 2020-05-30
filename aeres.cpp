#include<iostream>
#include<iomanip>
#define pi 3.14159
using namespace std;
int main()
{
double A,B,C,TRIANGULO,
CIRCULO,
TRAPEZIO,
QUADRADO,
RETANGULO;
cin>>A>>B>>C;
TRIANGULO=(0.5)*A*C;
CIRCULO= pi*C*C;
TRAPEZIO=(A+B)*(0.5)*C;
QUADRADO= B*B;
RETANGULO= A*B;
cout<<setprecision(3)<<fixed<<"TRIANGULO: "<<TRIANGULO<<endl;
cout<<setprecision(3)<<fixed<<"CIRCULO: "<<CIRCULO<<endl;
cout<<setprecision(3)<<fixed<<"TRAPEZIO: "<<TRAPEZIO<<endl;
cout<<setprecision(3)<<fixed<<"QUADRADO: "<<QUADRADO<<endl;
cout<<setprecision(3)<<fixed<<"RETANGULO: "<<RETANGULO<<endl;

 return 0;
}
