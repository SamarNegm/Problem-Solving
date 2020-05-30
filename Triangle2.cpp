#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //Code
    float A,B,C;
cin>>A>>B>>C;
    if((A<(B+C))||(B<(A+C))||(C<(A+B)))
    {
        cout << "Perimetro = "<<setprecision(1)<<fixed<< setw(4) << setfill( '0' )<<A+B+C<<endl;
    }
    else
          cout<<"Area = "<<setprecision(1)<<fixed<< setw(4) << setfill( '0' )<<(0.5*((A+B)*C))<<endl;









return 0;
}
