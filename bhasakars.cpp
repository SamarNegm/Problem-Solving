/*#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
int main()
{

    float A,B,C;
    cin>>A>>B>>C;


    if(((B*B)-(4*A*C))>=0&&(2*A)!=0)
    {


        cout<<setprecision(5)<<fixed<<"R1 = "<<(((-1*B)+sqrt(((B*B)-(4*A*C))))/(2*A))<<endl;

        cout<<setprecision(5)<<fixed<<"R2 = "<<(((-1*B)-sqrt(((B*B)-(4*A*C))))/(2*A))<<endl;
    }
    else if((((B*B)-(4*A*C))<0||(2*A)!=0))
    {
        cout<<"Impossivel calcular"<<endl;
    }
    return 0;
}*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	float a , b , c ;

	cin>>a>>b>>c;

	if(((b*b)-4*a*c) <0 || a ==0)
	{
		cout<<"Impossivel calcular"<<endl;

    }
	else
	{
	    cout<<setprecision(5)<<fixed<<"R1 = "<<(((-b)+sqrt((((b*b)-4*a*c))))/(2*a))<<endl;
	    cout<<setprecision(5)<<fixed<<"R2 = "<<(((-b)-sqrt((((b*b)-4*a*c))))/(2*a))<<endl;

	}

	return 0;
}
