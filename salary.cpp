#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
 double x,y,total,smi;
 string name;
   cin>>name;
   cin>>x;
    cin>>y;
    smi=(y*15)/100;
    total=smi+x;
    cout<<setprecision(2)<<fixed<<"TOTAL = "<<"R$ "<<total<<endl;

    return 0;
}
