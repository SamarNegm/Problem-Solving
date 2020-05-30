#include<iostream>
#include<iomanip>
using namespace std;
int main(){
double A,B,C;
cin>>setprecision(1)>>fixed>>A;
cin>>setprecision(1)>>fixed>>B;
cin>>setprecision(1)>>fixed>>C;
if(A<=10&&A>=0&&B<=10&&B>=0&&C<=10&&C>=0)
{



    cout<<setprecision(1)<<fixed<<"MEDIA = "<<(A*2+B*3+C*5)/10<<endl;



}


return 0;
}
