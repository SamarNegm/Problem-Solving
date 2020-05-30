#include<iostream>
using namespace std;
int main()
{
    float x;
    cin>>x;
    if(x>=0.00000&&x<=25.00000)
    {
        cout<<"Intervalo [0,25]"<<endl;
    }
    else if (x>25.00000&&x<=50.000000)
    {
        cout<<"Intervalo (25,50]"<<endl;
    }
    else if(x<=75.000000&&x>50.00000)
    {
        cout<<"Intervalo (50,75]"<<endl;
    }

    else if(x>75.00000&&x<=100.000000)
    {
        cout<<"Intervalo (75,100]"<<endl;
    }
    else
    {
        cout<<"Fora de intervalo"<<endl;
    }



    return 0;
}
